unit SpeechRecognition;

interface

uses
  System.SysUtils, System.Classes, System.Messaging;

type
  TGuesses = Array of String;
  TRecognitionEventEx = procedure(Sender: TObject; Guesses: TGuesses) of object;
  TRecognitionEvent = procedure(Sender: TObject; Guess: String) of object;

  TSpeechRecognition = class(TComponent)
  private
  const
    RecognizerRequestCode = 165308207; //arbitrary value
    DefaultPrompt = 'Speak now';
    DefaultLanguage = 'en-US';
  private
    FListening: Boolean;
    FLanguage: String;
    FOnRecognition: TRecognitionEvent;
    FOnRecognitionEx: TRecognitionEventEx;
    FPrompt: String;
    FTempCommands: TStrings;
    FOnCommand: TRecognitionEvent;
    FAlwaysGuesses: Boolean;
    procedure IntentCallback(const Sender: TObject; const M: TMessage);
    procedure DoListen;
    procedure ProcessesGuesses(AGuesses: TGuesses);
    function StorePrompt: Boolean;
    function StoreLanguage: Boolean;
  public
    procedure Listen; overload;
    procedure ListenFor(const ACommands: TStrings); overload;
    procedure ListenFor(const ACommands: TGuesses); overload;
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  published
    property Prompt: String read FPrompt write FPrompt stored StorePrompt;
    property AlwaysGuesses: Boolean read FAlwaysGuesses write FAlwaysGuesses default True;
    property Language: String read FLanguage write FLanguage stored StoreLanguage;
    property OnRecognition: TRecognitionEvent read FOnRecognition write FOnRecognition;
    property OnRecognitionEx: TRecognitionEventEx read FOnRecognitionEx write FOnRecognitionEx;
    property OnCommand: TRecognitionEvent read FOnCommand write FOnCommand;
  end;

procedure Register;

implementation

{$IFDEF ANDROID}
uses
 android.speech.SpeechRecognizer
, FMX.Helpers.Android
, FMX.Platform.Android
, AndroidAPI.JNIBridge
, Androidapi.JNI.Os
, Androidapi.JNI.GraphicsContentViewText
, Androidapi.JNI.JavaTypes
, Androidapi.Helpers
, Androidapi.JNI.App
;

{$ENDIF}

procedure Register;
begin
  RegisterComponents('Android', [TSpeechRecognition]);
end;

{ TSpeechRecognition }

constructor TSpeechRecognition.Create(AOwner: TComponent);
begin
  inherited;
  FLanguage := DefaultLanguage;
  FPrompt := DefaultPrompt;
  FTempCommands := TStringList.Create;
  FListening := False;
  FAlwaysGuesses := True;
  {$IFDEF ANDROID}
  TMessageManager.DefaultManager.SubscribeToMessage(TMessageResultNotification, IntentCallback);
  {$ENDIF}
end;

destructor TSpeechRecognition.Destroy;
begin
  FTempCommands.Free;
  {$IFDEF ANDROID}
  TMessageManager.DefaultManager.Unsubscribe(TMessageResultNotification, IntentCallback);
  {$ENDIF}
  inherited;
end;

procedure TSpeechRecognition.DoListen;
{$IFDEF ANDROID}
var
  Recognizer: JIntent;
  {$ENDIF}
begin
  FListening := True;
  {$IFDEF ANDROID}
  Recognizer := TJIntent.JavaClass.init(TJRecognizerIntent.JavaClass.ACTION_RECOGNIZE_SPEECH);
  Recognizer.putExtra(TJRecognizerIntent.JavaClass.EXTRA_LANGUAGE_MODEL,
                      TJRecognizerIntent.JavaClass.LANGUAGE_MODEL_FREE_FORM);
  Recognizer.putExtra(TJRecognizerIntent.JavaClass.EXTRA_PROMPT,
                      StringToJString(FPrompt));
  Recognizer.putExtra(TJRecognizerIntent.JavaClass.EXTRA_MAX_RESULTS, 5); // default 5
  Recognizer.putExtra(TJRecognizerIntent.JavaClass.EXTRA_LANGUAGE,
                      StringToJString(FLanguage));

  MainActivity.startActivityForResult(Recognizer, RecognizerRequestCode);
  {$ENDIF}
end;

function TSpeechRecognition.StoreLanguage: Boolean;
begin
  result := FLanguage <> DefaultLanguage;
end;

function TSpeechRecognition.StorePrompt: Boolean;
begin
  Result := FPrompt <> DefaultPrompt;
end;

{$IFDEF ANDROID}
function GetTextFromRecognizer(Intent: JIntent): TGuesses;
var
  guesses: JArrayList;
  guess: JObject;
  x: Integer;
begin
  guesses := intent.getStringArrayListExtra(TJRecognizerIntent.JavaClass.EXTRA_RESULTS);
  setlength(result, guesses.size);
  for x := 0 to guesses.Size - 1 do
  begin
    guess := guesses.get(x);
    result[x] := JStringToString(guess.toString)
  end;
end;
{$ENDIF}

procedure TSpeechRecognition.IntentCallback(const Sender: TObject; const M: TMessage);
{$IFDEF ANDROID}
var
  Notification: TMessageResultNotification;
  Guesses: TGuesses;
  {$ENDIF}
begin
  FListening := False;
  {$IFDEF ANDROID}
  // onActivityResult message received, process it
  Notification := TMessageResultNotification(M);
  //Label1.Text := Format('Req: %d  Rel: %d', [Notification.RequestCode, Notification.ResultCode]);
  if Notification.ResultCode = TJActivity.JavaClass.RESULT_OK then
  if Notification.RequestCode = RecognizerRequestCode then
  begin
    Guesses := GetTextFromRecognizer(Notification.Value);
    ProcessesGuesses(Guesses);
  end;
  {$ENDIF}
end;

function MatchGuessesToCommands(AGuesses: TGuesses; ACommands: TStrings): string;
var
  c, g: Integer;
begin
  for c := 0 to ACommands.Count - 1 do
    for g := 0 to Length(AGuesses) - 1 do
      if SameText(AGuesses[g], ACommands[c]) then
        exit(ACommands[c]);
  Result := '';
end;

procedure TSpeechRecognition.ProcessesGuesses(AGuesses: TGuesses);
var
  Guess: String;
  Command: String;
  LookingForCommand: Boolean;
begin
  if (FTempCommands.Count > 0) and Assigned(FOnCommand)  then
  begin
    LookingForCommand := True;
    if FTempCommands.Count > 0 then
    begin
      Command := MatchGuessesToCommands(AGuesses, FTempCommands);
      FOnCommand(self, Command);
    end;
  end else
    LookingForCommand := False;
  if not LookingForCommand or FAlwaysGuesses then
  begin
    if Assigned(FOnRecognition) then
    begin
      if Length(AGuesses) > 0 then
        Guess := AGuesses[0]
      else
        Guess := '';
      FOnRecognition(Self, Guess);
    end;
    if Assigned(FOnRecognitionEx) then FOnRecognitionEx(Self, AGuesses);
  end;
end;


procedure TSpeechRecognition.Listen;
begin
  if FListening then Exit;
  FTempCommands.Clear;
  DoListen;
end;

procedure TSpeechRecognition.ListenFor(const ACommands: TStrings);
begin
  if FListening then Exit;
  if Assigned(ACommands) then
    FTempCommands.Assign(ACommands)
  else
    FTempCommands.Clear;
  DoListen;
end;

procedure TSpeechRecognition.ListenFor(const ACommands: TGuesses);
var
  i: Integer;
begin
  if FListening then Exit;
  FTempCommands.Clear;
  for i := 0 to Length(ACommands) - 1 do
    FTempCommands.Add(ACommands[i]);
  DoListen;
end;

end.

unit SpeechRecognition;

interface

uses
  System.Classes, System.Messaging;

type
  TGuesses = Array of String;
  TRecognitionEventEx = procedure(Sender: TObject; Guesses: TGuesses) of object;
  TRecognitionEvent = procedure(Sender: TObject; Guess: String) of object;

  TSpeechRecognition = class(TComponent)
  private
    FLanguage: String;
    FOnRecognition: TRecognitionEvent;
    FOnRecognitionEx: TRecognitionEventEx;
    FPrompt: String;
    procedure IntentCallback(const Sender: TObject; const M: TMessage);
  public
    procedure Listen;
    constructor Create(AOwner: TComponent); override;
    property Prompt: String read FPrompt write FPrompt;
    property Language: String read FLanguage write FLanguage;
    property OnRecognition: TRecognitionEvent read FOnRecognition write FOnRecognition;
    property OnRecognitionEx: TRecognitionEventEx read FOnRecognitionEx write FOnRecognitionEx;
  end;

implementation

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

const
  RecognizerRequestCode = 165308207; //arbitrary value

{ TSpeechRecognition }

constructor TSpeechRecognition.Create(AOwner: TComponent);
begin
  inherited;
  FLanguage := 'en-US';
  FPrompt := 'Speak Now';
  TMessageManager.DefaultManager.SubscribeToMessage(TMessageResultNotification, IntentCallback);
end;

procedure TSpeechRecognition.Listen;
var
  Recognizer: JIntent;
begin
  Recognizer := TJIntent.JavaClass.init(TJRecognizerIntent.JavaClass.ACTION_RECOGNIZE_SPEECH);
  Recognizer.putExtra(TJRecognizerIntent.JavaClass.EXTRA_LANGUAGE_MODEL,
                      TJRecognizerIntent.JavaClass.LANGUAGE_MODEL_FREE_FORM);
  Recognizer.putExtra(TJRecognizerIntent.JavaClass.EXTRA_PROMPT,
                      StringToJString(FPrompt));
  Recognizer.putExtra(TJRecognizerIntent.JavaClass.EXTRA_MAX_RESULTS, 5); // default 5
  Recognizer.putExtra(TJRecognizerIntent.JavaClass.EXTRA_LANGUAGE,
                      StringToJString(FLanguage));

  MainActivity.startActivityForResult(Recognizer, RecognizerRequestCode);
end;

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

procedure TSpeechRecognition.IntentCallback(const Sender: TObject; const M: TMessage);
var
  Notification: TMessageResultNotification;
  Guesses: TGuesses;
  Guess: String;
begin
  if Assigned(FOnRecognition) or Assigned(FOnRecognitionEx) then
  begin
    // onActivityResult message received, process it
    Notification := TMessageResultNotification(M);
    if Notification.ResultCode = TJActivity.JavaClass.RESULT_OK then
    if Notification.RequestCode = RecognizerRequestCode then
    begin
      Guesses := GetTextFromRecognizer(Notification.Value);
      if Length(Guesses) > 0 then
        Guess := Guesses[0];
      if Assigned(FOnRecognition) then FOnRecognition(Self, Guess);
      if Assigned(FOnRecognitionEx) then FOnRecognitionEx(Self, Guesses);
    end;
  end;
end;


end.

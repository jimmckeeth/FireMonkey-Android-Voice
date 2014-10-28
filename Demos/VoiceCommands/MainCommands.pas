unit MainCommands;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes, System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs, FMX.Layouts,
  FMX.ListBox, SpeechRecognition, AndroidTTS, FMX.StdCtrls;

{$SCOPEDENUMS ON}
type
  TMenuState = (Top, Color, Reset, FullScreen);
  TForm6 = class(TForm)
    SpeechRecognition1: TSpeechRecognition;
    ListBox1: TListBox;
    Layout1: TLayout;
    Button1: TButton;
    procedure SpeechRecognition1Command(Sender: TObject; Guess: string);
    procedure Button1Click(Sender: TObject);
    procedure SpeechRecognition1RecognitionEx(Sender: TObject;
      Guesses: TGuesses);
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }
    FMenuState: TMenuState;
    FMenuItems: array [TMenuState] of TGuesses;
    procedure SetMenu(const items: TGuesses);
  public
    { Public declarations }
  end;

var
  Form6: TForm6;

implementation

{$R *.fmx}

procedure TForm6.FormCreate(Sender: TObject);
begin
  FMenuItems[TMenuState.Top] := ['Reset', 'Color', 'Full screen'];
  FMenuItems[TMenuState.Color] := ['Red', 'Blue', 'Green', 'Yellow'];
  FMenuItems[TMenuState.FullScreen] := ['Full', 'Restore'];
  FMenuItems[TMenuState.Reset] := ['Yes', 'No'];
end;

procedure TForm6.SpeechRecognition1Command(Sender: TObject; Guess: string);
begin
  if Guess = 'Reset' then FMenuState := TMenuState.Reset else
  if Guess = 'Color' then FMenuState := TMenuState.Color else
  if Guess = 'Full screen' then FMenuState := TMenuState.FullScreen else
  if Guess = 'Full' then
  begin
    FullScreen := True;
    FMenuState := TMenuState.Top;
  end else
  if Guess = 'Restore' then
  begin
    FullScreen := False;
    FMenuState := TMenuState.Top;
  end else
  if Guess = 'Yes' then
  begin
    FullScreen := False;
    Button1.TintColor := TAlphaColorRec.Null;
    FMenuState := TMenuState.Top;
  end else
  if Guess = 'Red' then
  begin
    FMenuState := TMenuState.Top;
    Button1.TintColor := TAlphaColorRec.Red;
  end else
  if Guess = 'Yellow' then
  begin
    FMenuState := TMenuState.Top;
    Button1.TintColor := TAlphaColorRec.Yellow;
  end else
  if Guess = 'Blue' then
  begin
    FMenuState := TMenuState.Top;
    Button1.TintColor := TAlphaColorRec.Blue;
  end else
  if Guess = 'Green' then
  begin
    FMenuState := TMenuState.Top;
    Button1.TintColor := TAlphaColorRec.Green;
  end
  else
    ListBox1.Items.Add('Not found!');
  ListBox1.Items.Add('>' + Guess + '<');
end;

procedure TForm6.SetMenu(const items: TGuesses);
var
  i: Integer;
begin
  ListBox1.Items.Clear;
  for i := 0 to length(items) - 1 do
    ListBox1.Items.Add(items[i]);
end;

procedure TForm6.Button1Click(Sender: TObject);
begin
  ListBox1.Clear;
  SetMenu(FMenuItems[FMenuState]);
  Application.ProcessMessages;
  SpeechRecognition1.ListenFor(FMenuItems[FMenuState]);
end;

procedure TForm6.SpeechRecognition1RecognitionEx(Sender: TObject;
  Guesses: TGuesses);
var
  i: Integer;
begin
  for i := 0 to Length(Guesses) - 1 do
    ListBox1.Items.Add(Guesses[i]);
end;

end.

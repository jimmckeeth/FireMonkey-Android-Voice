unit GVTMainForm;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes, System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs, FMX.StdCtrls,
  FMX.Layouts, FMX.ListBox

, AndroidTTS
, SpeechRecognition;

type
  TForm37 = class(TForm)
    StyleBook1: TStyleBook;
    ListBox1: TListBox;
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
  private
    { Private declarations }
    sr: TSpeechRecognition;
    tts: TAndroidTTS;
    procedure RecognizeEx(Sender: TObject; Guesses: TGuesses);
    procedure Recognize(Sender: TObject; Guess: String);
  public
    { Public declarations }
  end;

var
  Form37: TForm37;

implementation

{$R *.fmx}

uses
  FMX.Helpers.Android
, FMX.Platform.Android
, Androidapi.JNI.Speech
, Androidapi.JNI.GraphicsContentViewText
, Androidapi.JNI.JavaTypes
, Androidapi.Helpers
, Androidapi.JNI.App
;

procedure TForm37.FormCreate(Sender: TObject);
begin
  sr := TSpeechRecognition.Create(nil);
  sr.OnRecognitionEx := RecognizeEx;
  sr.OnRecognition := Recognize;

  tts := TAndroidTTS.Create(nil);
end;

procedure TForm37.FormShow(Sender: TObject);
var
  extras: JArrayList;
  extra: JObject;
  i: Integer;
  Intent: JIntent;
begin
  Intent := SharedActivity.getIntent;
  if Assigned(Intent) then
  begin
    extras := Intent.getExtras.getStringArrayList(TJRecognizerIntent.JavaClass.EXTRA_RESULTS);
    for I := 0 to extras.size - 1 do
    begin
      extra := extras.get(I);
      Listbox1.Items.Add(JStringToString(extra.toString));
    end;
    TTS.Speak(ListBox1.Items[0]);
    sr.Listen;
  end;
end;

procedure TForm37.RecognizeEx(Sender: TObject; Guesses: TGuesses);
var
  guess: string;
begin
  ListBox1.Clear;
  for guess in Guesses do
  begin
    ListBox1.Items.Add(Guess);
  end;
end;

procedure TForm37.Recognize(Sender: TObject; Guess: String);
begin
  tts.Speak(Guess);
  sr.Listen;
end;

end.

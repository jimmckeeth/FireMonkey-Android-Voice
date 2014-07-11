unit SpeechRecognizerDemoForm;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes, System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs, FMX.Layouts,
  FMX.ListBox, FMX.StdCtrls, SpeechRecognition, AndroidTTS, FMX.ListView.Types,
  FMX.ListView;

type
  TForm37 = class(TForm)
    btnListen: TButton;
    Layout1: TLayout;
    btnType: TButton;
    ListView1: TListView;
    procedure btnListenClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure btnTypeClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure ListView1ItemClick(const Sender: TObject;
      const AItem: TListViewItem);
  private
    { Private declarations }
    sr : TSpeechRecognition;
    tts : TAndroidTTS;
    procedure Add(s: string);
  public
    { Public declarations }
    procedure RecognizeEx(Sender: TObject; Guesses: TGuesses);
    procedure Recognize(Sender: TObject; Guess: String);
  end;

var
  Form37: TForm37;

implementation

{$R *.fmx}

procedure TForm37.Add(s: string);
begin
  ListView1.Items.Add.Text := s;
end;

procedure TForm37.btnListenClick(Sender: TObject);
begin
  sr.Listen;
end;

procedure TForm37.btnTypeClick(Sender: TObject);
var
  s: String;
begin
  if InputQuery('Say what?', 'I''ll say this', s) then
  begin
    Add(s);
    tts.Speak(s);
  end;
end;

procedure TForm37.FormCreate(Sender: TObject);
begin
  sr := TSpeechRecognition.Create(nil);
  sr.OnRecognitionEx := RecognizeEx;
  sr.OnRecognition := Recognize;

  tts := TAndroidTTS.Create(nil);
  //tts.OnDone := TTSDone;
end;

procedure TForm37.FormShow(Sender: TObject);
var
  lvi: TListViewItem;
begin
  lvi := ListView1.Items.Add;
  lvi.Height := 80;
  lvi.Text := 'Use the type button to add a new line. Use the listen button to ' +
     'replace all these lines with what it hears you say. Tap a line to say ' +
     'it.';
  tts.Speak(lvi.Text);
end;

procedure TForm37.ListView1ItemClick(const Sender: TObject;
  const AItem: TListViewItem);
begin
  tts.Speak(AItem.Text);
end;

procedure TForm37.RecognizeEx(Sender: TObject; Guesses: TGuesses);
var
  guess: string;
  lbi: TListBoxItem;
begin
  ListView1.BeginUpdate;
  try
    for guess in Guesses do
    begin
      Add(guess);
    end;
  finally
    ListView1.EndUpdate;
  end;
end;

procedure TForm37.Recognize(Sender: TObject; Guess: String);
begin
  tts.Speak(Guess);
end;


end.

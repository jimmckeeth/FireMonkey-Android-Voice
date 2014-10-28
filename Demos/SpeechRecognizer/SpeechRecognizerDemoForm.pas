unit SpeechRecognizerDemoForm;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes, System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs, FMX.Layouts,
  FMX.ListBox, FMX.StdCtrls, SpeechRecognition, AndroidTTS, FMX.ListView.Types,
  FMX.ListView, AndroidWearComponent, FMX.Controls.Presentation, FMX.Edit;

type
  TForm37 = class(TForm)
    btnListen: TButton;
    Layout1: TLayout;
    btnType: TButton;
    ListView1: TListView;
    tts: TAndroidTTS;
    sr: TSpeechRecognition;
    Layout2: TLayout;
    AndroidWearViews1: TAndroidWearViews;
    Edit1: TEdit;
    Button1: TButton;
    btnClear: TButton;
    procedure btnListenClick(Sender: TObject);
    procedure btnTypeClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure ListView1ItemClickEx(const Sender: TObject; ItemIndex: Integer;
      const LocalClickPos: TPointF; const ItemObject: TListItemObject);
    procedure srRecognition(Sender: TObject; Guess: string);
    procedure srRecognitionEx(Sender: TObject; Guesses: TGuesses);
    procedure Button1Click(Sender: TObject);
    procedure btnClearClick(Sender: TObject);
  private
    { Private declarations }
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
{$R *.GearLive.fmx  }

procedure TForm37.Add(s: string);
begin
  ListView1.Items.Add.Text := s;
end;

procedure TForm37.btnClearClick(Sender: TObject);
begin
  ListView1.Items.Clear;
end;

procedure TForm37.btnListenClick(Sender: TObject);
begin
  sr.Listen;
end;

procedure TForm37.btnTypeClick(Sender: TObject);
begin
  Edit1.Visible := True;
  Edit1.SetFocus;
end;

procedure TForm37.Button1Click(Sender: TObject);
begin
  Edit1.Visible := False;
  Add(Edit1.Text);
  tts.Speak(Edit1.Text);
  Edit1.Text := '';
end;

procedure TForm37.FormShow(Sender: TObject);
begin
  Add('Double tap to repeat a line.');
  tts.Speak(ListView1.Items[0].Text);
  Edit1.Visible := False;
end;

procedure TForm37.ListView1ItemClickEx(const Sender: TObject;
  ItemIndex: Integer; const LocalClickPos: TPointF;
  const ItemObject: TListItemObject);
begin
  tts.Speak(ListView1.Items[ItemIndex].Text);
end;

procedure TForm37.RecognizeEx(Sender: TObject; Guesses: TGuesses);
begin
end;

procedure TForm37.srRecognition(Sender: TObject; Guess: string);
begin
  tts.Speak(Guess);
end;

procedure TForm37.srRecognitionEx(Sender: TObject; Guesses: TGuesses);
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
end;


end.

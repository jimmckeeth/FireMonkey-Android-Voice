unit AndroidTTS;

interface

uses
  System.SysUtils, System.Classes, AndroidAPI.JNIBridge, androidapi.JNI.TTS,
  FMX.Forms;

type
  TAndroidTTS = class(TComponent)
  private
    ftts: JTextToSpeech;
    finit: Boolean;

    type
      TttsOnInitListener = class(TJavaLocal, JTextToSpeech_OnInitListener)
      private
        [weak] FParent : TAndroidTTS;
      public
        constructor Create(AParent : TAndroidTTS);
        procedure onInit(status: Integer); cdecl;
      end;

    private
    fttsListener : TttsOnInitListener;

    public
      procedure Init;
      constructor Create(AOwner: TComponent); override;
      procedure Speak(say: String);

    end;



implementation

uses
  FMX.Helpers.Android
, FMX.Platform.Android
, Androidapi.JNI.Os
, Androidapi.JNI.GraphicsContentViewText
, Androidapi.JNI.JavaTypes
, Androidapi.Helpers
, Androidapi.JNI.App
;

{ TAndroidTTS }

constructor TAndroidTTS.Create(AOwner: TComponent);
begin
  inherited;
  finit := False;
  Init;
end;

procedure TAndroidTTS.Init;
begin
  Ftts := TJTextToSpeech.JavaClass.init(SharedActivityContext, fttsListener);
end;

procedure TAndroidTTS.Speak(say: String);
begin
  ftts.speak(StringToJString(say), TJTextToSpeech.JavaClass.QUEUE_FLUSH, nil)
end;

{ TAndroidTTS.TttsOnInitListener }

constructor TAndroidTTS.TttsOnInitListener.Create(AParent: TAndroidTTS);
begin
  Inherited Create;
  FParent := AParent;
end;

procedure TAndroidTTS.TttsOnInitListener.onInit(status: Integer);
var
  Result : Integer;
begin
  if (status = TJTextToSpeech.JavaClass.SUCCESS) then
  begin
   result := FParent.ftts.setLanguage(TJLocale.JavaClass.US);
   if (result = TJTextToSpeech.JavaClass.LANG_MISSING_DATA) or
      (result = TJTextToSpeech.JavaClass.LANG_NOT_SUPPORTED) then
     raise Exception.Create('This Language is not supported')
   else
   begin
     FParent.finit := true;
   end;
  end
  else
    raise Exception.Create('Initilization Failed!');
end;

end.

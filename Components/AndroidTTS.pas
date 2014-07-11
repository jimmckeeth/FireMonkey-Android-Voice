unit AndroidTTS;

interface

uses
  System.SysUtils, System.Classes, AndroidAPI.JNIBridge, androidapi.JNI.TTS,
  Androidapi.JNI.JavaTypes, FMX.Forms;

type
  TAndroidTTS = class(TComponent)
  private
    ftts: JTextToSpeech;

    type
      TttsOnInitListener = class(TJavaLocal, JTextToSpeech_OnInitListener,
        JTextToSpeech_OnUtteranceCompletedListener)
      private
        [weak] FParent : TAndroidTTS;
      public
        constructor Create(AParent : TAndroidTTS);

        // JTextToSpeech_OnInitListener
        procedure onInit(status: Integer); cdecl;

        // JTextToSpeech_OnUtteranceCompletedListener
        procedure onUtteranceCompleted(utteranceID: JString); cdecl;

      end;

    private
      fttsListener : TttsOnInitListener;
      FDone: TNotifyEvent;
      // Never fires
      // property OnDone: TNotifyEvent read FDone write FDone;
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
, Androidapi.Helpers
, Androidapi.JNI.App
;

{ TAndroidTTS }

constructor TAndroidTTS.Create(AOwner: TComponent);
begin
  inherited;
  Init;
end;

procedure TAndroidTTS.Init;
begin
  Ftts := TJTextToSpeech.JavaClass.init(SharedActivityContext, fttsListener);
end;

procedure TAndroidTTS.Speak(say: String);
var
  params: JHashMap;
begin
  params := nil;
// This needs to be a <String,String> hashmap for the OnDone to work.
{  params := TJHashMap.JavaClass.init();
  params.put(TJTextToSpeech_Engine.JavaClass.KEY_PARAM_UTTERANCE_ID,
     StringToJString('id'));   }

  ftts.speak(StringToJString(say), TJTextToSpeech.JavaClass.QUEUE_FLUSH, params);
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
   result := FParent.ftts.setLanguage(TJLocale.JavaClass.FRENCH);
   FParent.ftts.setOnUtteranceCompletedListener(self);
   if (result = TJTextToSpeech.JavaClass.LANG_MISSING_DATA) or
      (result = TJTextToSpeech.JavaClass.LANG_NOT_SUPPORTED) then
     raise Exception.Create('This Language is not supported')
   else
   begin
     // Processing after Init
   end;
  end
  else
    raise Exception.Create('Initilization Failed!');
end;

procedure TAndroidTTS.TttsOnInitListener.onUtteranceCompleted(
  utteranceID: JString);
begin
  // Currently not firing.
  TThread.Synchronize(nil, procedure begin
    if Assigned(FParent.FDone) then
    begin
      FParent.FDone(FParent);
    end;
  end);
end;

end.

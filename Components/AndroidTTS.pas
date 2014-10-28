unit AndroidTTS;

interface

uses
  System.SysUtils, System.Classes,
  {$IFDEF ANDROID}
  AndroidAPI.JNIBridge, androidapi.JNI.TTS,
  Androidapi.JNI.JavaTypes,
  {$ENDIF}
  FMX.Forms;

type
  TAndroidTTS = class(TComponent)
  private
  {$IFDEF ANDROID}
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
      procedure Init;
      // Never fires
      // property OnDone: TNotifyEvent read FDone write FDone;
{$ENDIF}
    public
      constructor Create(AOwner: TComponent); override;
      procedure Speak(say: String);

    end;

procedure Register;

implementation

{$IFDEF ANDROID}

uses
  FMX.Helpers.Android
, FMX.Platform.Android
, Androidapi.JNI.Os
, Androidapi.JNI.GraphicsContentViewText
, Androidapi.Helpers
, Androidapi.JNI.App
;

  {$ENDIF}

procedure Register;
begin
  RegisterComponents('Android', [TAndroidTTS]);
end;


{ TAndroidTTS }

constructor TAndroidTTS.Create(AOwner: TComponent);
begin
  inherited;
{$IFDEF ANDROID}
  Init;
{$ENDIF}
end;

procedure TAndroidTTS.Speak(say: String);
{$IFDEF ANDROID}
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
{$ELSE}
begin

end;
{$ENDIF}

{$IFDEF ANDROID}
procedure TAndroidTTS.Init;
begin
  Ftts := TJTextToSpeech.JavaClass.init(SharedActivityContext, fttsListener);
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
   result := FParent.ftts.setLanguage(TJLocale.JavaClass.ENGLISH);
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

{$ENDIF}

end.

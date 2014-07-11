program GlassVoiceTrigger;

uses
  System.StartUpCopy,
  FMX.MobilePreview,
  FMX.Forms,
  GVTMainForm in 'GVTMainForm.pas' {Form37};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TForm37, Form37);
  Application.Run;
end.

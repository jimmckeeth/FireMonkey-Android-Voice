program VoiceCommands;

uses
  System.StartUpCopy,
  FMX.Forms,
  MainCommands in 'MainCommands.pas' {Form6};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TForm6, Form6);
  Application.Run;
end.

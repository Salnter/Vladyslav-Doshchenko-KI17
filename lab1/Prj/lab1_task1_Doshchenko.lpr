program lab1_task1_Doshchenko;

{$mode objfpc}{$H+}

uses
  {$IFDEF UNIX}{$IFDEF UseCThreads}
  cthreads,
  {$ENDIF}{$ENDIF}
  Interfaces, // this includes the LCL widgetset
  Forms, Unit1, Golos, Delete_prb, Form2, Form3, Unit2, Form5, form5_negative
  { you can add units after this };

{$R *.res}

begin
  RequireDerivedFormResource := True;
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.CreateForm(TGalery, Galery);
  Application.CreateForm(TGalery_2, Galery_2);
  Application.Run;
end.


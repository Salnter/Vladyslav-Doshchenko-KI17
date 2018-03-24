unit Form5;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls;

type

  { TGalery }

  TGalery = class(TForm)
    Label1: TLabel;
    procedure FormCreate(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  Galery: TGalery;

implementation

{$R *.lfm}

{ TGalery }

procedure TGalery.FormCreate(Sender: TObject);
begin

end;

end.


unit Task2;

{$mode objfpc}{$H+}

interface

uses
 validator, Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,
  ExtCtrls, Math;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Edit1: TEdit;
    Edit2: TEdit;
    Edit3: TEdit;
    Image1: TImage;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Memo1: TMemo;
    procedure Button1Click(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.Button1Click(Sender: TObject);
var x,y,z,q,q1,p,n:real;
  i:byte;
  s1,s2,s3,t:string;
  begin
   s1:=Edit1.Text;
   s2:=Edit2.Text;
  s3:=Edit3.Text;
   i:=data1(s1,s2,s3);
  if (i=0) then
   begin
   Label1.Caption:='Некоректно введені дані!';
   exit;
   end;
 x:=strtofloat(s1);
 y:= strtofloat(s2);
 z:= strtofloat(s3);
 i:= data2(z);
  if (i=0) then
   begin
   Label1.Caption:='Некоректно введені дані!';
   exit;
   end;
  q:= ln(abs(sin(z)));
   p:= (1/7*power(x,y))-(sqrt(abs(y-z)));
   n:=(10*3.14*power(z,4));
   q1:=q+(p/n);
  t:=floattostr(q1);
   Label1.Caption:='Q = '+t;
end;

end.


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
var x,y,z,p,q,n,u,o:real;
  i:byte;
  s1,s2,s3,t:string;
  begin
   s1:=Edit1.Text;
   s2:=Edit2.Text;
  s3:=Edit3.Text;
  if length(s1)>6 then
    begin
   Label1.Caption:='Занадто велике число!';
   exit;
   end;
  if length(s2)>6 then
    begin
   Label1.Caption:='Занадто велике число!';
   exit;
   end;
  if length(s3)>6 then
    begin
   Label1.Caption:='Занадто велике число!';
   exit;
   end;
   i:=data1(s1,s2,s3);
  if (i=0) then
   begin
   Label1.Caption:='Некоректно введені дані!';
   exit;
   end;
 x:=strtofloat(s1);
 y:= strtofloat(s2);
 z:= strtofloat(s3);
  if x>1000 then
    begin
   Label1.Caption:='Занадто велике число!';
   exit;
   end;
  if y>1000 then
    begin
   Label1.Caption:='Занадто велике число!';
   exit;
   end;
  if z>1000 then
    begin
   Label1.Caption:='Занадто велике число!';
   exit;
   end;
 i:= data2(z);
  if (i=0) then
   begin
   Label1.Caption:='Змінна z не може дорівнювати нулю!';
   exit;
   end;
  if (ln(abs(sin(z)))>power(10,38))then
   begin
   Label1.Caption:='Обчислення неможливі!';
   exit;
   end;
   p:=ln(abs(sin(z)));
   if ((1/7)*power(x,y))>power(10,38)then
   begin
   Label1.Caption:='Обчислення неможливі!';
   exit;
   end;
   q:=(1/7*power(x,y))-(sqrt(abs(y-z)));
    if ((sqrt(abs(y-z))))>power(10,38)then
   begin
   Label1.Caption:='Обчислення неможливі!';
   exit;
   end;
   u:=(sqrt(abs(y-z)));
   if (10*pi*power(z,4))>power(10,38)then
   begin
   Label1.Caption:='Обчислення неможливі!';
   exit;
   end;
   n:=10*pi*power(z,4);
   if (p+((q-u)/n))>power(4.54728408833987,2985)then
   begin
   Label1.Caption:='Обчислення неможливі!';
   exit;
   end;
  Label1.Caption:= FloatToStr(p+((q-u)/n));

end;

end.


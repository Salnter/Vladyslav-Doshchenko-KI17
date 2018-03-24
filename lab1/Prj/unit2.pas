unit unit2;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,mega_validator,delete_prb;

type

  { TNumber }

  TNumber = class(TForm)
    Button1: TButton;
    Edit1: TEdit;
    Edit2: TEdit;
    Edit3: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  Number: TNumber;

implementation

{$R *.lfm}

{ TNumber }

procedure TNumber.Button1Click(Sender: TObject);
var
s,d,f,g,h,j:string;
y,p,u:real;
begin
s:=Utf8ToAnsi(Edit1.Text);
d:=Utf8ToAnsi(Edit2.Text);
f:=Utf8ToAnsi(Edit3.Text);
while (pos('.',s)<>0) do
  s[pos('.',s)]:=#44;
g:=s;
while (pos('.',d)<>0) do
  d[pos('.',d)]:=#44;
h:=d;
while (pos('.',f)<>0) do
  f[pos('.',f)]:=#44;
j:=f;
if (valid1(g)=1) and (valid2(g)=1) and (valid3(g)=1) then
  y:= StrToFloat(g);
if (valid1(h)=1) and (valid2(h)=1) and (valid3(h)=1)then
  u:=  StrToFloat(h);
if (valid1(j)=1) and (valid2(j)=1) and (valid3(j)=1)then
  p:= StrToFloat(j);
label4.caption:=floattostr(y) ;
if p=0 then label4.caption:='Змінна z не може дорівнювати нулю!';
end;

procedure TNumber.FormCreate(Sender: TObject);
begin

end;

end.


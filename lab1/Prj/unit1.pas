unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,
  ExtCtrls, Delete_prb, golos, Form5, Form5_negative;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button2: TButton;
    Button3: TButton;
    Button4: TButton;
    Edit1: TEdit;
    Image1: TImage;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Memo: TMemo;
    Memo1: TMemo;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Label1Click(Sender: TObject);
    procedure MemoChange(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.Label1Click(Sender: TObject);
begin

end;

procedure TForm1.MemoChange(Sender: TObject);
begin
  Memo.ReadOnly:=True;
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
  Label1.Caption:= DateToStr(Date);
end;

procedure TForm1.Button3Click(Sender: TObject);
var
  cnt,i:integer;
  s:string;
begin
  s:=Utf8ToAnsi(Edit1.Text);
   cnt:=0;
  for i:=1 to length(s) do
    if s[i] in ['e','u','i','o','a','E','U','I','O','A','�','�','�','�','�','�','�',#178,#179,'�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�','�']
      then cnt:=cnt+1;
   Memo.Text:=IntToStr(cnt);
end;

procedure TForm1.Button4Click(Sender: TObject);
 var
   t:string;
begin
  t:=Utf8ToAnsi(Edit1.Text);
  If Semonenko(WideUpperCase(Probel(t)))= 1 then
  Galery.Show
  else Galery_2.Show;
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
Memo.Text:=Edit1.Text;
Edit1.Clear;
end;

end.


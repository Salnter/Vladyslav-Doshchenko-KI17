unit Mega_Validator;
interface
 function valid1 (var a:string):byte;
 function valid2 (var b:string):byte;
 function valid3 (var c:string):byte;
implementation
function valid1 (var a:string):byte;
var
s:string;
k,i,q,w,p:integer;
t:byte;
begin
  s:=a;
  k:=1;
  for i:=k to length(s) do
  if s[i] in ['1','2','3','4','5','6','7','8','9','0','-','+',',','.'] then t:=1
  else t:=0;
  valid1:=t;
  end;
function valid2 (var b:string):byte;
var
s,d:string;
k,i,q,w,p:integer;
t:byte;
begin
  s:=b;

   if pos(#44,s)>1 then
  begin
    k:=1;
    for i:=k to length(s) do
    begin
      if s[i] = #44 then
      q:=q+1;
      k:=k+1;
    end;
  end else t:=0;
  if q= 1 then t:=1
  else if  pos(#44,s)=0 then t:=1 else t:=0;
  valid2:=t;
  end;
 function valid3 (var c:string):byte;
var
s:string;
k,i,q,w,p:integer;
t:byte;
begin
s:=c;

if (pos('-',s)=1) or (pos('+',s)=1) then
  begin
    k:=1;
    for i:=k to length(s) do
    begin
      if (s[i] = '-') or (s[i] = '+') then
      w:=w+1;
      k:=k+1;
    end;
  end
  else t:=0;
  if w= 1 then t:=1
  else  if (pos('-',s)=0) or (pos('+',s)=0) then t:=1 else t:=0;
  valid3:=t;
end;

end.


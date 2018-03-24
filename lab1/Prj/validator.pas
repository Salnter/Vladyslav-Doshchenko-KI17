unit validator_2;

interface
 function valid (var a:string):byte;


implementation
function valid (var a:string):byte;
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
  if pos(',',s)>1 then
  begin
    k:=1;
    for i:=k to length(s) do
    begin
      if s[i] = ',' then
      p:=p+1;
      k:=k+1;
    end;
  end
  else t:=0;
  if p= 1 then t:=1
  else t:=0;
  if pos('.',s)>1 then
  begin
    k:=1;
    for i:=k to length(s) do
    begin
      if s[i] = '.' then
      q:=q+1;
      k:=k+1;
    end;
  end;
  if q= 1 then
  begin
    t:=1;
    s[pos('.',s)]:=',';
  end
  else t:=0;
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
  else t:=0;
end;

end.


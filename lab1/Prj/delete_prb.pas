unit Delete_prb;
interface
var
s:string;
function Probel(var s:string):string;
implementation
function Probel (var s:string):string;
var
s1:string;
begin
s1:=s;
while pos(' ',s1)<>0 do
begin
Delete(s1, Pos(' ',s1), 1);
end;
Probel:=s1;
end;
end.


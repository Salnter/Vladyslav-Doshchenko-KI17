unit validator;

interface
 function Data1(var x,y,z: string):byte;
 function Data2(z: real):byte;

implementation
  function Data1(var x,y,z: string):byte;
  var i,d,l,t:byte;
    g,p:set of char ;
  begin
   g:=['0','1','2','3','4','5','6','7','8','9'];
   p:=[',','-'];
    data1:=1;
     d:=1;
     t:=1;
   if (x='')or(y='')or(z='') then
   begin
    data1:=0 ;
     exit;
      end;
   while (pos('.',x)<>0) do
       x[pos('.',x)]:=',';
   while (pos('.',y)<>0) do
       y[pos('.',y)]:=',';
   while (pos('.',z)<>0) do
       z[pos('.',z)]:=',';
       for i:=1 to length(x) do
    begin
      if not(x[i] in g)and not(x[i] in p) then
       begin
      data1:=0;
      exit;
      end;
      if ((x[i] in p)and ((d=0)or (t=0))) or ((i<>1) and (x[i]='-'))then
      begin
        data1:=0;
        exit;
        end
      else
      begin
      if (x[i]=',') then
       begin
       d:=0;
       end;
       if(x[i]='-') then
           t:=0;
        if (x[i]='+') then
       begin
       l:=0;
       end;
         end;
        end;
       d:=1;
        t:=1;

   for i:=1 to length(y) do
   begin
     if not(y[i] in g)and not(y[i] in p) then
      begin
     data1:=0;
     exit;
     end;
     if ((y[i] in p)and ((d=0)or (t=0) )) or ((i<>1) and (y[i]='-'))then
      begin
        data1:=0;
        exit;
        end
      else
      begin
      if (y[i]=',')  then
       begin
       d:=0;
       end;
       if(y[i]='-') then
           t:=0;
       if (x[i]='+') then
       begin
       l:=0;
       end;
                 end;
        end;
          d:=1;
          t:=1;

         for i:=1 to length(z) do
    begin
      if not(z[i] in g)and not(z[i] in p) then
       begin
      data1:=0;
      exit;
      end;
     if ((z[i] in p)and ((d=0)or (t=0) )) or ((i<>1) and (z[i]='-'))then
      begin
        data1:=0;
        exit;
        end
      else
      begin
      if (z[i]=',') then
       begin
       d:=0;
       end;
       if(z[i]='-') then
           t:=0;
                 end;
        end;
       end;

     function data2(z: real):byte;
  begin
    data2:=1;
   if (z<=0) then
      data2:=0;
       end;
  end.



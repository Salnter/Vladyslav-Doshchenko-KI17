#include<iostream>
#include<cstring>
#include<cmath>
#include<clocale>
#include<cstdlib>
using namespace std;

short Check (char x[],char y[], char z[])
{
   short k = 2;
   short d,t = 1;
   char*coma_x = strchr(x,',');
   char*coma_y = strchr(y,',');
   char*coma_z = strchr(z,',');
   while (coma_x - x != 0)
   {
     x[coma_x - x] = '.';
   }
    while (coma_y - y != 0)
   {
     x[coma_y - y] = '.';
   }
    while (coma_z - z != 0)
   {
     x[coma_z - z] = '.';
   }
   for (int i = 0; i<strlen(x)-1;i++)
   {
     if ((isdigit(x[i])== 0) &&  (x[i] != '.')&&(x[i] != '-'))
     {
        k=1;
        return k;
     }
       if ((isdigit(x[i])!= 0 ) && (((x[i]='.')&& (d==0)) || ((x[i]=='-') && (t=0))) || ((i!=1) && (x[i]='-')))
       {
         k = 1;
         return k;
       }else {
        if (x[i]== '.')
        d = 0;
        if (x[i]== '-')
           t = 0;
       }
   }  d = 1;
        t = 1;
         for (int i = 0; i<strlen(y)-1;i++)
   {
     if ((isdigit(y[i])== 0) &&  (y[i] != '.')&&(y[i] != '-'))
     {
        k=1;
        return k;
     }
       if ((isdigit(y[i])!= 0 ) && (((y[i]='.')&& (d==0)) || ((y[i]=='-') && (t=0))) || ((i!=1) && (y[i]='-')))
       {
         k = 1;
         return k;
       }else {
        if (y[i]== '.')
        d = 0;
        if (y[i]== '-')
           t = 0;
       }
   }  d = 1;
        t = 1;
         for (int i = 0; i<strlen(z)-1;i++)
   {
     if ((isdigit(z[i])== 0) &&  (z[i] != '.')&&(z[i] != '-'))
     {
        k=1;
        return k;
     }
       if ((isdigit(z[i])!= 0 ) && (((z[i]='.')&& (d==0)) || ((z[i]=='-') && (t=0))) || ((i!=1) && (z[i]='-')))
       {
         k = 1;
         return k;
       }else {
        if (z[i]== '.')
        d = 0;
        if (z[i]== '-')
           t = 0;
       }
   }  d = 1;
        t = 1;
        return k;
}
 short valid1(double z)
  {
    int k = 2;
    if (z=0)
    k = 1;
    return k;

  }
  short valid2(double z, double x)
  {
    int k = 2;
    if (z < 0)
    k = 1;
    if (x<=0)
    k=1;
    return k;
  }
  double q_calculation (double x, double y, double z)
  {
    setlocale(LC_CTYPE,"ukr");
    double p,q,f,n,k;
    const double pi = 3.1415926535897932384626433832795;
    if ((log(abs(sin(z))))>pow(10,38)){
        cout<<"Обчислення неможливi,введiть менше значення!";

    }
    else p=log(abs(sin(z)));
   if (((1/7*pow(x,y))-(sqrt(abs(y-z)))) >pow(10,38)){
        cout<<"Обчислення неможливi,введiть менше значення!";

    }
   else  q=(1/7*pow(x,y))-(sqrt(abs(y-z)));
    if((sqrt(abs(y-z))) >pow(10,38)){
        cout<<"Обчислення неможливi,введiть менше значення!";

    }
    else f =(sqrt(abs(y-z)));
    if ((10*pi*pow(z,4)) >pow(10,38)){
        cout<<"Обчислення неможливi,введiть менше значення!";

    }
   else n =10*pi*pow(z,4);
    if ((p+((q-f)/n)) >pow(4.54728408833987,2985)){
        cout<<"Обчислення неможливi,введiть менше значення!";

    }
   else k = (p+((q-f)/n));
   return k;
  }

double s_calculation (double x, double y, double z)
  {
    setlocale(LC_CTYPE,"ukr");
    double k;
    const double pi = 3.1415926535897932384626433832795;
    if (abs(((((sqrt(1+x)-3*cos(x))/(log(x*x)+3*sin(pi*x)))+((sqrt(pow(z,3)+2))*(sqrt(pow(z,3)+2))))>pow(10,38))))
    {
       cout<<"Обчислення неможливi,введiть менше значення!";
    }
    else k =(((sqrt(1+x)-3*cos(x))/(log(x*x)+3*sin(pi*x)))+((sqrt(pow(z,3)+2))*(sqrt(pow(z,3)+2))));
    return k;
  }

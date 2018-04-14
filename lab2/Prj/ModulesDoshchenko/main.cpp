#include<iostream>
#include<cstring>
#include<cmath>
#include<clocale>
#include<cstdlib>
using namespace std;

 short valid3(double x,double y,double z)
 {
   if (x>100 && y>100 && z>100){
    return 0;
   }
    if (x>400 || y>400 || z>400){
    return 0;
   }
   return 1;
 }

  short valid2(double z, double x)
  {
    if (z <= 0)
    return 1;
    if (x<=0)
    return 1;
    return 2;
  }
  double q_calculation (double x, double y, double z)
  {
    setlocale(LC_CTYPE,"ukr");
    double p,q,f,n,k;
    k = 0;
    const double pi = 3.1415926535897932384626433832795;
    if ((log(abs(sin(z))))>pow(10,38)){
            cout<<"Обчислення неможливi,введiть менше значення!";
        return 0;
    }
    else p=log(abs(sin(z)));
   if (((1/7*pow(x,y))-(sqrt(abs(y-z)))) >pow(10,38)){
        cout<<"Обчислення неможливi,введiть менше значення!";
       return 0;

    }
   else  q=(1/7*pow(x,y))-(sqrt(abs(y-z)));
    if((sqrt(abs(y-z))) >pow(10,38)){
            cout<<"Обчислення неможливi,введiть менше значення!";
        return 0;

    }
    else f =(sqrt(abs(y-z)));
    if ((10*pi*pow(z,4)) >pow(10,38)){
            cout<<"Обчислення неможливi,введiть менше значення!";
        return 0;

    }
   else n =10*pi*pow(z,4);
    if ((p+((q-f)/n)) >pow(4.54728408833987,2985)){
            cout<<"Обчислення неможливi,введiть менше значення!";
       return 0;

    }
   else k = (p+((q-f)/n));
   return k;
  }

double s_calculation (double x, double y, double z)
  {
    setlocale(LC_CTYPE,"ukr");
    double k = 0;
    double a,s,d,f,g;
    const double pi = 3.1415926535897932384626433832795;
    if (abs(((((sqrt(1+x)-3*cos(x))/(log(x*x)+3*sin(pi*x)))+((sqrt(pow(z,3)+2))*(sqrt(pow(z,3)+2))))>pow(10,38))))
    {
      cout<<"Обчислення неможливi,введiть менше значення!";
      return 0;
    }

    else k =((((sqrt(1+x))-(3*cos(x)))/((log(x*x))+(3*sin(pi*x))))+((sqrt(pow(z,3))+2)*(sqrt(pow(z,3))+2)));
    return k;
  }

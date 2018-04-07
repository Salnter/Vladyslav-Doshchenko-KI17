#include <iostream>
#include"ModulesDoshchenko.h"

using namespace std;

int main()
{
    setlocale(LC_ALL,"ukr");
    double massiv[5];
    double x,y,z,o;
    x =1;
    y=1;
    z=1;
    o = q_calculation(x,y,z) ;
    cout<<o<<endl;
    return 0;
}

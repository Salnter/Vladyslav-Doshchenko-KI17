#include <iostream>
#include"ModulesDoshchenko.h"

using namespace std;

int main()
{
    setlocale(LC_ALL,"ukr");
    double massiv[5];
   massiv[0]=q_calculation(1,1,1);
    massiv[1]=q_calculation(1,2,1);
     massiv[2]=q_calculation(1.05,1,1);
      massiv[3]=q_calculation(-1,1,1);
       massiv[4]=q_calculation(0,0,1);
   if (massiv[0] == -0,168056462180752)
    cout<<"TestCase #1"<<' '<<"Passed"<<endl;
   if (massiv[1] != -0.23171843941751 )
    cout<<"TestCase #2"<<' '<<"Passed"<<endl;
    if (massiv[2] == -0,167829097976335)
    cout<<"TestCase #3"<<' '<<"Passed"<<endl;
    if (massiv[3] == -0,177151030357432)
    cout<<"TestCase #4"<<' '<<"Passed"<<endl;
    if (massiv[4] == -0,199887450799131)
    cout<<"TestCase #5"<<' '<<"Passed"<<endl;

    return 0;

}

#include <iostream>
#include"ModulesDoshchenko.h"
#include<cmath>
#include<cstring>

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
    cout << "Task 1" << endl;
   if (massiv[0] == -0,168056462180752)
    cout<<"TestCase #1"<<' '<<"Passed"<<endl;
    if (massiv[2] == -0,167829097976335)
    cout<<"TestCase #2"<<' '<<"Passed"<<endl;
    if (massiv[3] == -0,177151030357432)
    cout<<"TestCase #3"<<' '<<"Passed"<<endl;
    if (massiv[4] == -0,199887450799131)
    cout<<"TestCase #4"<<' '<<"Passed"<<endl;

    cout << "Task 2" << endl;
    double s1, s2, s3, s4, s5;
    string tsa1,tsa2,tsa3,tsa4,tsa5;
    s1 = s_calculation(1, 1, 1);
	s2 = s_calculation(1, 2, 1);
	s3 = s_calculation(1.05, 1, 1);
	s4 = s_calculation(1, -1, 1);
	s5 = s_calculation(1, 0, 0);
	tsa1 = (abs(abs(-562611690377528.562500) - abs(s1)) < 0.00000000000001 ? "Passed" : "Failed");
	tsa2 = (abs(abs(-562611690377528.562500) - abs(s2)) < 0.00000000001 ? "Passed" : "Failed");
	tsa3 = (abs(3.16392 - abs(s3)) < 0.0000000000001 ? "Passed" : "Failed");
	tsa4 = (abs(abs(-562611690377528.562500) - abs(s4)) < 0.00000000000001 ? "Passed" : "Failed");
	tsa5 = (abs(abs(-562611690377528.562500) - abs(s5)) < 0.0000000000000001 ? "Passed" : "Failed");
    cout << "TestCase #1"<<tsa1<<endl;
    cout << "TestCase #2"<<tsa1<<endl;
    cout << "TestCase #3"<<tsa1<<endl;
    cout << "TestCase #4"<<tsa1<<endl;
    cout << "TestCase #5"<<tsa1<<endl;
    return 0;

}

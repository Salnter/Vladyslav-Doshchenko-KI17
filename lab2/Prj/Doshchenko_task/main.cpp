#include <iostream>
#include <windows.h>
#include <string>
#include "ModulesDoshchenko.h"
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

bool Logic(double a, double b){
    bool c = false;
    if ((a+7) < (abs(b+5))) {
        c = true;}
        else
        c = false;
    return c;
}

int main()
{
    setlocale(LC_CTYPE,"ukr");
	cout << "Vladislav Doshchenko (c)" << endl;
	int sw;
	cout << "Натиснувши 1 ви отримаєте логiчний результат:  a+7<|b-5|!" << endl << "Натиснувши 2 ви отримаєте розрахунки попереднiх задач!" << endl;
	cin >> sw;
	switch (sw) {
	    case 1: {
	double a,b;
	bool c;
	cout << "Введiть перший параметр\n";
	while (!(cin >> a)){
        cout << "Некоректнi данi!\n";
        cin.clear();
        fflush(stdin);}
	cout << "Введiть другий переметр\n";
	while (!(cin >> b)){
        cout << "Некоректнi данi!\n";
        cin.clear();
        fflush(stdin);}
	cout << "Логiчний результат: ";
	if (Logic(a,b)==true){
            cout << 1 << endl;
        }
        if (Logic(a,b)==false){
            cout << 0 << endl;
        }
        break;}
        case 2: {
        double x, y, z;
        cout << "Введiть X (при вводi дробу використовуйте КРАПКУ): ";
        while (!(cin >> x)){
        cout << "Некоректнi данi!\n";
        cin.clear();
        fflush(stdin);}
        cout <<  "Введiть Y (при вводi дробу використовуйте КРАПКУ): ";
        while (!(cin >> y)){
        cout << "Некоректнi данi!\n";
        cin.clear();
        fflush(stdin);}
        cout <<  "Введiть z(при вводi дробу використовуйте КРАПКУ): ";
        while (!(cin >> z)){
        cout << "Некоректнi данi!\n";
        cin.clear();
        fflush(stdin);}
        if (valid2(z,x)==1){
           cout<<"Змiннi z та x не можуть дорiвнювати нулю! Змiннi z та x не можуть бути меншими за нуль!"<<endl;
           system("pause");
           return 0;
        }
        if (valid3(x,y,z) == 0)
        {
          cout<<"Обчислення неможливi,введiть менше значення!"<<endl;;
          system("pause");
          return 0;
        }
        cout<<"Q= " << q_calculation(x,y,z)<<endl;
        cout<<"S= " << fixed<<(s_calculation(x,y,z))<<endl;
        int a, b, c,l;
        cout << "Надалi будуть використовуватися цiлi значення" << endl;
        c = round(q_calculation(x,y,z));
        l = round(s_calculation(x,y,z));
        a = int(c);
        b = int(l);
        cout << "Числа у вiсiмковiй системi числення:" << endl;
        cout << std::oct << "Q = " << a << " S = " << b << endl;
        cout << "Числа у шiстнадцятковiй системi числення:" << endl;
        cout << std::hex << "Q  = " << a << " S = " << b << endl;
        break;}
    }
system("pause");
}

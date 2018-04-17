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

bool Logic(char a, char b){
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
	while(sw!=0){
	cout << "Натиснувши 1 ви отримаєте логiчний результат:  a+7<|b-5|" << endl << "Натиснувши 2 ви отримаєте розрахунки попереднiх задач!" << endl<<"Натиснувши iнший символ програма завершиться!"<<endl;;
	cin >> sw;
	switch (sw) {
	    case 1: {
	string a,b;
	bool c;
	cout << "Введiть перший параметр\n";
	cin>>a;
	cout << "Введiть другий переметр\n";
	cin>>b;
	cout << "Логiчний результат: ";
	if (Logic(a[0],b[0])==true){
            cout << 1 << endl;
        }
        if (Logic(a[0],b[0])==false){
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
        int s,c,l;
        cout << "Надалi будуть використовуватися цiлi значення" << endl;
        c = round(x);
        l = round(y);
        s = round(z);
        cout << "Числа у вiсiмковiй системi числення:" << endl;
        cout << std::oct << "X = " << c<<" " << " Y = " << l <<" "<<"Z = "<<s<<" "<< endl;
        cout << "Числа у шiстнадцятковiй системi числення:" << endl;
        cout << std::hex << "X = " << c <<" "<< " Y = " << l<<" " <<"Z = "<<s<<" "<< endl;
        break;}
	}
    }
system("pause");
}

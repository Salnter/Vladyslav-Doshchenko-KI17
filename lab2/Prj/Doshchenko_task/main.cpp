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
	cout << "���������� 1 �� �������� ���i���� ���������:  a+7<|b-5|" << endl << "���������� 2 �� �������� ���������� ��������i� �����!" << endl<<"���������� i���� ������ �������� �����������!"<<endl;;
	cin >> sw;
	switch (sw) {
	    case 1: {
	string a,b;
	bool c;
	cout << "����i�� ������ ��������\n";
	cin>>a;
	cout << "����i�� ������ ��������\n";
	cin>>b;
	cout << "���i���� ���������: ";
	if (Logic(a[0],b[0])==true){
            cout << 1 << endl;
        }
        if (Logic(a[0],b[0])==false){
            cout << 0 << endl;
        }
        break;}
        case 2: {
        double x, y, z;
        cout << "����i�� X (��� ����i ����� �������������� ������): ";
        while (!(cin >> x)){
        cout << "���������i ���i!\n";
        cin.clear();
        fflush(stdin);}
        cout <<  "����i�� Y (��� ����i ����� �������������� ������): ";
        while (!(cin >> y)){
        cout << "���������i ���i!\n";
        cin.clear();
        fflush(stdin);}
        cout <<  "����i�� z(��� ����i ����� �������������� ������): ";
        while (!(cin >> z)){
        cout << "���������i ���i!\n";
        cin.clear();
        fflush(stdin);}
        if (valid2(z,x)==1){
           cout<<"��i��i z �� x �� ������ ���i������� ����! ��i��i z �� x �� ������ ���� ������� �� ����!"<<endl;
           system("pause");
           return 0;
        }
        if (valid3(x,y,z) == 0)
        {
          cout<<"���������� ��������i,����i�� ����� ��������!"<<endl;;
          system("pause");
          return 0;
        }
        cout<<"Q= " << q_calculation(x,y,z)<<endl;
        cout<<"S= " << fixed<<(s_calculation(x,y,z))<<endl;
        int s,c,l;
        cout << "�����i ������ ����������������� �i�i ��������" << endl;
        c = round(x);
        l = round(y);
        s = round(z);
        cout << "����� � �i�i����i� ������i ��������:" << endl;
        cout << std::oct << "X = " << c<<" " << " Y = " << l <<" "<<"Z = "<<s<<" "<< endl;
        cout << "����� � �i�����������i� ������i ��������:" << endl;
        cout << std::hex << "X = " << c <<" "<< " Y = " << l<<" " <<"Z = "<<s<<" "<< endl;
        break;}
	}
    }
system("pause");
}

#include <iostream>
#include<conio.h>
using namespace std;

#define Enter 13
#define Escape 27

void main() {

	setlocale(LC_ALL, "");
	cout << "Shooter" << endl;
	char key;
	do {
		key = _getch(); //������� ���� � ���������� ���� ���
		//cout << (int)key << "\t" << key << endl;

		if (key == 'w')cout << "������" << endl;
		else if (key == 's')cout << "�����" << endl;
		else if (key == 'a')cout << "�����" << endl;
		else if (key == 'd')cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if(key == Enter)cout << "�����" << endl;
		else cout << "Error" << endl;

	} while (key != Escape);
}
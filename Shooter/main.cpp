#include <iostream>
#include<conio.h>
using namespace std;

void main() {

	setlocale(LC_ALL, "");
	cout << "Shooter" << endl;
	char key;
	do {
		key = _getch(); //������� ���� � ���������� ���� ���
		cout << (int)key << "\t" << key << endl;

		if (key == 'w')cout << "������" << endl;
		if (key == 's')cout << "�����" << endl;
		if (key == 'a')cout << "�����" << endl;
		if (key == 'd')cout << "������" << endl;
		if (key == ' ')cout << "������" << endl;
		if (key == 13)cout << "�����" << endl;

	} while (key != 27);
}
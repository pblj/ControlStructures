#include <iostream>
#include<conio.h>
using namespace std;

#define Enter 13
#define Escape 27

#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

void main() {

	setlocale(LC_ALL, "");
	cout << "Shooter" << endl;
	char key;
	do {
		key = _getch(); //������� ���� � ���������� ���� ���
		//cout << (int)key << "\t" << key << endl;
		
		if (key == 'w' || key == 'W')cout << "������" << endl;
		else if (key == 's' || key == 'S')cout << "�����" << endl;
		else if (key == 'a' || key == 'A')cout << "�����" << endl;
		else if (key == 'd' || key == 'D')cout << "������" << endl;
		else if (key == ' ')cout << "������" << endl;
		else if(key == Enter)cout << "�����" << endl;
		else cout << "Error" << endl;

	} while (key != Escape);
}
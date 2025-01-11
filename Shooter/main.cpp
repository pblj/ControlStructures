#include <iostream>
#include<conio.h>
using namespace std;

#define Enter 13
#define Escape 27

#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

#define IF_ELSE

void main() {

	setlocale(LC_ALL, "");

#ifdef IF_ELSE

	cout << "Shooter" << endl;
	char key;
	do {
		key = _getch(); //ожидает ввод и возвращает аски код
		//cout << (int)key << "\t" << key << endl;
		
		if (key == 'w' || key == 'W' || key == UpArrow)cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if(key == Enter)cout << "Огонь" << endl;
		else if (key != -32 && key != Escape)cout << "Error" << endl;

	} while (key != Escape);

#endif

	char key;

	do {
		key = _getch();
		cout << (int)key << "\t" << key << endl;

	} while (key != Escape);
}
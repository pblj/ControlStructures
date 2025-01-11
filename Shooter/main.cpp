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
		key = _getch(); //ожидает ввод и возвращает аски код
		//cout << (int)key << "\t" << key << endl;
		
		if (key == 'w' || key == 'W')cout << "Вперед" << endl;
		else if (key == 's' || key == 'S')cout << "Назад" << endl;
		else if (key == 'a' || key == 'A')cout << "Влево" << endl;
		else if (key == 'd' || key == 'D')cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if(key == Enter)cout << "Огонь" << endl;
		else cout << "Error" << endl;

	} while (key != Escape);
}
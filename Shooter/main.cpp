#include <iostream>
#include<conio.h>
using namespace std;

void main() {

	setlocale(LC_ALL, "");
	cout << "Shooter" << endl;
	char key;
	do {
		key = _getch(); //ожидает ввод и возвращает аски код
		cout << (int)key << "\t" << key << endl;

		if (key == 'w')cout << "Вперед" << endl;
		if (key == 's')cout << "Назад" << endl;
		if (key == 'a')cout << "Влево" << endl;
		if (key == 'd')cout << "Вправо" << endl;
		if (key == ' ')cout << "Прыжок" << endl;
		if (key == 13)cout << "Огонь" << endl;

	} while (key != 27);
}
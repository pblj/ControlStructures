#include <iostream>
#include<conio.h>
using namespace std;

#define Enter 13
#define Escape 27

#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

//#define IF_ELSE

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
		else if (key == Enter)cout << "Огонь" << endl;
		else if (key != -32 && key != Escape)cout << "Error" << endl;

	} while (key != Escape);

#endif

	char key;

	do {
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case 'w': cout << "Вперед" << endl; break;
		case 'W': cout << "Вперед" << endl; break;
		case UpArrow: cout << "Вперед" << endl; break;
		case 's': cout << "Назад" << endl; break;
		case DownArrow: cout << "Назад" << endl; break;
		case 'S': cout << "Назад" << endl; break;
		case 'a': cout << "Налево" << endl; break;
		case LeftArrow: cout << "Налево" << endl; break;
		case 'A': cout << "Налево" << endl; break;
		case 'd': cout << "Направо" << endl; break;
		case RightArrow: cout << "Направо" << endl; break;
		case 'D': cout << "Направо" << endl; break;
		case ' ': cout << "Прыжок" << endl; break;
		case -32: break;
		case Escape:cout << "Выход";
		case Enter: cout << "Огонь" << endl; break;

		default:
			cout << "Error" << endl;
		}

	} while (key != Escape);
}
#include <iostream>
#include<conio.h>
using namespace std;

void main() {

	setlocale(LC_ALL, "");
	cout << "Shooter" << endl;
	char key;
	do {
		key = _getch();
		cout << (int)key << "\t" << key << endl;

	} while (true);
}
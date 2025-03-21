#include <iostream>
using namespace std;

void main() {

	setlocale(LC_ALL, "");

	for (int i = 2; i < 10; i++) {

		for (int l = 1; l <= 10; l++) {

			cout << i << " * " << l << " = " << i * l << endl;

		}

	}

}
﻿#include <iostream>
using namespace std;
//#define FibonacciSeries
#define FibonacciCountNumber
#define SimpleSeries

void main() {

	setlocale(LC_ALL, "");

#ifdef FibonacciSeries

	int limit = 0, number = 1,f1 = 0,f2 = 1;

	cout << "Введите предел для ряда Фибоначчи:";
	cin >> limit;

	cout << "Последовательность Фибоначчи: 0";

	while (number < limit) {

		cout << ", ";  cout << number;

		number = f1 + f2;
		f1 = f2;
		f2 = number;

	}
#endif //FibonacciSeries

#ifdef FibonacciCountNumber

	int countRow = 0, number = 1, f1 = 0, f2 = 1;

	cout << "Введите количество чисел Фибоначчи:";
	cin >> countRow;

	cout << "Последовательность Фибоначчи: 0";

	for (int i = 1; i < countRow; i++) {
		cout << ", ";  cout << number;

		number = f1 + f2;
		f1 = f2;
		f2 = number;
	}

#endif //FibonacciCountNumber

#ifdef SimpleSeries

	int limit = 0;

	cout << "Введите предел для ряда простых чисел!"; cin >> limit;

	for (int i = 0; i < limit; i++) {

		if (i)

	}

#endif // SimpleSeries

}
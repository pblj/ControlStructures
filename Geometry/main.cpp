#include <iostream>
using namespace std;
//#define SQUARE
//#define triangle
//#define REVERSE_TRIANGLE
//#define MIRROR_TRIANGLE
//#define MIRROR_TRIANGLE_REVERSE
//#define MIRROR_DIAMOND
#define STRANGE_SQUARE 

void main() {

	int d;
	setlocale(LC_ALL, "");

#ifdef SQUARE
	cout << "Geometry" << endl;
	cout << "Введите размер квадрата:"; cin >> d;

	for (int i = 0; i < d; i++)
	{
		for (int l = 0; l < d; l++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef triangle
	cout << "Geometry" << endl;
	cout << "Введите размер квадрата:"; cin >> d;

	for (int i = 0; i < d; i++)
	{
		for (int l = 0; l < i; l++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // triangle

#ifdef REVERSE_TRIANGLE

	cout << "Geometry" << endl;
	cout << "Введите размер квадрата:"; cin >> d;

	for (int i = 0; i < d; i++)
	{
		for (int l = 0; l < d - i; l++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif
	
#ifdef MIRROR_TRIANGLE

	cout << "Geometry" << endl;
	cout << "Введите размер квадрата:"; cin >> d;

	for (int i = 1; i <= d; i++)
	{
		for (int k = 0; k < i; k++) {
			cout << "  ";
		}
		for (int l = 0; l < d - i; l++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // MIRROR_TRIANGLE

#ifdef MIRROR_TRIANGLE_REVERSE

	cout << "Geometry" << endl;
	cout << "Введите размер квадрата:"; cin >> d;

	for (int i = 1; i <= d; i++)
	{
		
		for (int l = 0; l < d - i; l++)
		{
			cout << "  ";
		}

		for (int k = 0; k < i; k++) {
			cout << "* ";
		}
		cout << endl;
	}

#endif // MIRROR_TRIANGLE_REVERSE

#ifdef MIRROR_DIAMOND

	cout << "Введите размер фигуры:"; cin >> d;

	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < d - i; j++)
		{
			cout << " ";
		}
		cout << "/";

		for (int l = 0; l < i*2; l++)
		{
			cout << " ";
		}

		cout << "\\" << endl;

	}

	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		cout << "\\";

		for (int l = 2; l < (d - i)*2; l++)
		{
			cout << " ";
		}

		cout << "/" << endl;

	}

#endif

#ifdef STRANGE_SQUARE

	cout << "Введите размер квадрата:"; cin >> d;

	for (int i = 0; i < d; i++)
	{
		for (int l = 0; l < d; l++)
		{
			if ((l + i )% 2 == 0)
			{
				cout << "- ";
			}
			else 
			{
				cout << "+ ";
			}
		}
		cout << endl;
	}

#endif

}
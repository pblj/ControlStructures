#include <iostream>
using namespace std;
//#define SQUARE
//#define triangle
//#define REVERSE_TRIANGLE
//#define MIRROR_TRIANGLE
#define MIRROR_TRIANGLE_REVERSE

void main() {

	int d;
	setlocale(LC_ALL, "");

#ifdef SQUARE
	cout << "Geometry" << endl;
	cout << "¬ведите размер квадрата:"; cin >> d;

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
	cout << "¬ведите размер квадрата:"; cin >> d;

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
	cout << "¬ведите размер квадрата:"; cin >> d;

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
	cout << "¬ведите размер квадрата:"; cin >> d;

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
	cout << "¬ведите размер квадрата:"; cin >> d;

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


}
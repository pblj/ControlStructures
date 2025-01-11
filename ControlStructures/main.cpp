#include <iostream>
using namespace std;

void main() 
{

	setlocale(LC_ALL, "");
//#define IF_ELSE
#define WHILE_2

#ifdef IF_ELSE
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;


	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно." << endl;
	}
#endif // IF_DEF

	int n;
	cout << "Введите коливество итераций: "; cin >> n;
	while (--n)
	{
		cout << n << "\t";

	}
	cout << endl;
}
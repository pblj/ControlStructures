#include <iostream>
using namespace std;

void main() {

	setlocale(LC_ALL, "");

	double a, b;
	char s;
	cout << "¬ведите простое арифметическое выражение: ";
	cin >> a;

#ifdef CALC_IF
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;

	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;

	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
#endif // CALC_IF

	do {
		cin >> s >> b;
		switch (s)
		{
		case '+':  a += b; break;
		case '-':  a -= b; break;
		case '*':  a *= b; break;
		case '/':  a /= b; break;
		default: cout << "Error: No operation" << endl;
		}
		//cout << a << s << b << "=" << a << endl;
		cout << " = ";
		cout << a;
	} while (1);
	}

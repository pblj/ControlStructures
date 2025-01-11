#include <iostream>
using namespace std;

void main() {

	setlocale(LC_ALL, "");

	double a, b;
	char s;
	cout << "¬ведите простое арифметическое выражение: ";
	cin >> a >> s >> b;

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

	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;

	}

}
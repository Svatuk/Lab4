#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F;
	cout << "a = "; cin >> a; // вхідний аргумент
	cout << "b = "; cin >> b; // вхідний аргумент
	cout << "c = "; cin >> c; // вхідний аргумент
	cout << "xp = "; cin >> xp; // ввід х початку
	cout << "xk = "; cin >> xk; // ввід х кінця
	cout << "dx = "; cin >> dx; // ввід х кроку
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = a - (x / (10 + b));
		else
			if (x > 0 && b == 0)
				F = (x - a) / (x - c);
			else
				F = 3 * x + (2 / c);
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
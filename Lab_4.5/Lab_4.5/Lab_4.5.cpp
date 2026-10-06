#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	// спосіб 1
	double x, y, R; 
	srand((unsigned)time(NULL));
	cout << "R = "; cin >> R; // введення значення радіусу кола
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x; // введення значення х
		cout << "y = "; cin >> y; // введення значення у
		if ((x >= 0 && y >= 0 && x * x + y * y <= R * R) ||
			(x <= 0 && y >= 0 && y <= x + R) ||
			(x <= 0 && y <= 0 && x * x + y * y <= R * R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	// спосіб 2
		for (int i = 0; i < 10; i++)
		{
			x = 2 * R * rand() / RAND_MAX - R;
			y = 2 * R * rand() / RAND_MAX - R;
			if ((x >= 0 && y >= 0 && x * x + y * y <= R * R) ||
				(x <= 0 && y >= 0 && y <= x + R) ||
				(x <= 0 && y <= 0 && x * x + y * y <= R * R))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}
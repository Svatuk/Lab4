#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i = 1; //початкове значення і
	double D = 1.0; //значення добутку

	// спосіб 1 while
	while (i <= 15)
	{
		D *= ((sin(i) * sin(i)) + (cos(1.0 / i) * cos(1.0 / i))) / (i * i);
		i++;
	}
	cout << D << endl;

	// спосіб 2 do while 
	i = 1;
	D = 1.0;
	
	do {
		D *= ((sin(i) * sin(i)) + (cos(1.0 / i) * cos(1.0 / i))) / (i * i);
		i++;
	} while (i <= 15);
	
	cout << D << endl;

	// спосіб 3 for ++
	D = 1.0;
	for (i = 1; i <= 15; i++) {
		D *= ((sin(i) * sin(i)) + (cos(1.0 / i) * cos(1.0 / i))) / (i * i);
	}
	cout << D << endl;

	// спосіб 4 for --
	D = 1.0;
	for (i = 15; i >= 1; i--) {
		D *= ((sin(i) * sin(i)) + (cos(1.0 / i) * cos(1.0 / i))) / (i * i);
	}
	cout << D << endl;

	return 0;
}

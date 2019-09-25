#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double PI = 3.14159265359;
	double E  = 2.71828182845;

	double x;
	int k;
	cout << "Enter varible x: ";
	cin >> x;
	cout << endl;
	cout << "enter what formula you want to choose 1, 2 or 3; ";
	cin >> k;
	cout << endl;
	double result = atan(2 * x + 1) + 1;
	switch (k)
	{
	case 1: result = atan(2 * x + 1) + 1;
		cout << result << endl;
		break;
		system("pause");
	case 2: result = cos((PI / 2) - pow(x, x) + pow(E, abs(x + 5)));
		cout << result << endl;
		break;
		system("pause");
	case 3: result = log((1 + x) / (pow(x, 3) + pow(abs(x), 1. / 2.)));
		cout << result << endl;
		break;
		system("pause");
	default:  cout << "Incorrect value of the variant!" << endl;
		system("pause");
	}
	
}

#include <iostream>
#include <iomanip>
#include <cmath>  

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::pow;
using std::setw;

int main()
{
	double amount;
	double principal;
	double rate;

	principal = 1000.0;
	rate = .05;

	cout << "Year" << setw(21) << "Amount on deposit" << endl;

	cout << fixed << setprecision(2);

	for (int year = 1; year <= 10; year++)
	{
		amount = principal * pow(1.0 + rate, year);

		cout << setw(4) << year << setw(21) << amount << endl;
	}

	return 0;
}


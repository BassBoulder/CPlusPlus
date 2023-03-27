#include <iostream>

using namespace std;


int main()
{
	int dollars		{ 0 };
	int quarters	{ 0 };
	int dimes		{ 0 };
	int nickles		{ 0 };
	int pennies		{ 0 };

	int amount	{ 0 };

	cout << "Enter an amount in cents: " << endl;
	cin >> amount;

	cout << endl;

	dollars = (amount / 100);
	quarters = (amount % 100) / 25;
	dimes = ((amount % 100) % 25) / 10;
	nickles = (((amount % 100) % 25) % 10) / 5;
	pennies = ((((amount % 100) % 25) % 10) % 5) / 1;


	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: "	<< dimes << endl;
	cout << "Nickles: " << nickles << endl;
	cout << "Pennies: " << pennies << endl;

	return 0;
}
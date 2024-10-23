#include <iostream>

using namespace std;

int main()
{
	const int small_room{ 25 };
	const int large_room{ 30 };
	const double sales_tax{ 0.06 };
	const int estimate_valid{ 30 };

	int amount_small_room{ 0 };
	cout << "How many small rooms do you want cleaned: ";
	cin >> amount_small_room;

	int amount_large_room{ 0 };
	cout << "How many large rooms do you want cleaned: ";
	cin >> amount_large_room;

	cout << "Estimate for carpet cleaning service:" << endl;
	cout << "Number of small rooms: " << amount_small_room << endl;
	cout << "Number of large rooms: " << amount_large_room << endl;
	cout << "Price per small room: " << small_room << endl;
	cout << "price per large room: " << large_room << endl;

	int total_small {
		//Small Room Calculation
		(amount_small_room * small_room)
	};

	int total_large{
		//Large Room Calculation
		(amount_large_room * large_room)
	};

	cout << "Cost: $" << total_small + total_large << endl;

	double total_small_tax{
		//Small Room Tax Calculation
		(total_small * sales_tax)
	};

	double total_large_tax{
		//Large Room Tax Calculation
		(total_small * sales_tax)
	};

	double total_tax{ total_small_tax + total_large_tax };

	cout << "Tax: $" << total_tax << endl; //TAX ROUDNING TO INT

	cout << "===========================================" << endl;

	double total{ total_small + total_large + total_tax };

	cout << "Total estimate: $" << total << endl;

	cout << "This estimate is value for: " << estimate_valid << endl;

	return 0;

}
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int value{};

	cout << "ENTER A VALUE: ";
	cin >> value;

	switch (value)
	{
		case 10:
			cout << "Porky-boy";
		break;

		case 20:
			cout << "Craft dinner!";
		break;

		default:
			cout << "Cabbage for tea";
	}

	return 0;

}


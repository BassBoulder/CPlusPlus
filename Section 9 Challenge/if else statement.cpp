#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num{};
	const int ten{ 10 };

	cin >> num;

	if (num < ten)
	{
		if (num == 1)
			cout << "You're a porky-boy" << endl;
		if (num == 2)
			cout << "Chunky says what?" << endl;
		if (num == 3)
			cout << "You must want ma'ma's gumbo!" << endl;
		
		cout << "Yes" << endl;
	}
	else
	{
		cout << "Ah fatty bum bum!" << endl;
	}

	return 0;
}

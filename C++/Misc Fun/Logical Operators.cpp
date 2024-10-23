#include <iostream>

using namespace std;

int main()
{
	const int upper{ 10 };
	const char letter{ 'c' };

	cout << upper << endl;
	cout << letter << endl;

	bool match{};

	cout << boolalpha;

	match = (upper > 5 && letter == 'c');

	cout << match << endl;





	return 0;
}
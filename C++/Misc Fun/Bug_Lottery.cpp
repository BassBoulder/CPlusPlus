#include <iostream>

using namespace std;

int main()
{
	int max{};
	int min{};

	srand(static_cast<unsigned int>(time(0)));


	cin >> min >> max;
	cout << rand() % (max - min + 1) + min;

	return 0;
}
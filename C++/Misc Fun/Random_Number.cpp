#include <iostream>

using namespace std;

int main()
{
	int max = 31;
	int min = 1;

	cout << rand() % (max - min + 1) + min;

	return 0;
}
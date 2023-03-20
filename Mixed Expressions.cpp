#include <iostream>

using namespace std;

int main()
{
	int num1{ 10 };
	int num2{ 8 };

	cout << num1 / num2 << endl;

	cout << num1 / static_cast<double> (num2) << endl;

	return 0;
}
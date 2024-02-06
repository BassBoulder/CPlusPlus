#include <iostream>

using namespace std;

int main()
{
	double num1{};
	double num2{};

	cin >> num1 >> num2;
	cout << boolalpha << endl;

	bool equals = (num1 == num2);
	bool not_equals = (num1 != num2);

	cout << "num1 & num2 are equal: " << equals << endl;
	cout << "num1 & num2 are NOT equal: " << not_equals << endl;

	return 0;
}
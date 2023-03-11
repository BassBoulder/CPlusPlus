#include <iostream>
#include <cfloat>
#include <climits>

using namespace std;

int main()
{
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "long long: " << sizeof(int) << endl;
	cout << "unsigned long: " << sizeof(unsigned long) << endl;
	cout << "unsigned long long: " << sizeof(unsigned long long) << endl;

	cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"" << endl;

	cout << LLONG_MAX << endl;
	cout << LONG_MAX << endl;

	return 0;
}
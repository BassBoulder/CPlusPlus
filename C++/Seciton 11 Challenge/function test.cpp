#include <iostream>

using namespace std;

void function_test(int value1, int value2)
{
	cout << "value 1 is: " << value1 << endl;
	cout << "value 2 is: " << value2 << endl;
}

int main()
{
	int number1{}; int number2{};

	cout << "2 numbers please: ";
	cin >> number1 >> number2;


	function_test(number1, number2);


	return 0;

}
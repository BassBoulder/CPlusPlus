#include <iostream>
#include <string>

using namespace std;

int main()
{
	int valuein{};
	string result{};

		cin >> valuein;

		result = (valuein < 10) ? "<10" : ">=10";

		cout << result;

	return 0;
}

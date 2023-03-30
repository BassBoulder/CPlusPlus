#include <iostream>

using namespace std;

int main()
{
	int num{};
	const int min{ 10 };
	const int max{ 100 };

	cout << "Enter a number between 10 and 100" << endl;

	cin >> num;

	if (num < min)
	{
		cout << "============= IF STATEMENT #1 ============= " << endl;
		int diff(min - num);
		cout << "Your number is: " << diff << " off what the minimum" << endl;
	}

	if (num >= min)
	{
		cout << "============= IF STATEMENT #2 ============= " << endl;
		int diff(num - min);
		cout << "Your number is: " << diff << " over the minimum" << endl;
	}

	if (num < max)
	{
		cout << "============= IF STATEMENT #3 ============= " << endl;
		int diff(max - num);
		cout << "Your number is: " << diff << " under the mmaximum" << endl;
	}

	return 0;
}
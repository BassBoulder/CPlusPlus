#include <iostream>

using namespace std;

int main()
{
	int num{11};
	const int ten{ 10 };

	if (num < ten)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "Nope" << endl;
	}

	return 0;
}

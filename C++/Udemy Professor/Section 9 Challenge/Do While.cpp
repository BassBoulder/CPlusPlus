#include <iostream>

using namespace std;

int main()
{
	char character{};

	do
	{
		cout << "What character do you want to type?:" << endl;
		cin >> character;
	} 
		while (character != 'a' && character != 'A');

	return 0;
}
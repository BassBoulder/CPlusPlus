#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	char name[]{ "Nick" };

	for (char c : name)
		cout << c << endl;
	cout << endl;




	for (int c : name)
		cout << c << endl;


	return 0;
}
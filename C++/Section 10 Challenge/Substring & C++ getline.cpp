#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name{ "Nick" };

	cout << name.substr(0, 2);


	string new_name{};

	cout << "What is your name?" << endl;

	getline(cin, new_name);

	cout << endl << new_name << endl;

	return 0;
}
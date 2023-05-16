#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{

	string name{};

	cout << "What's your full name?" << endl;
	cin >> name;
	cout << name << endl;


	cout << "What's your full name?" << endl;
	getline(cin, name);
	cout << name << endl;

	cout << "What's your full name?" << endl;
	getline(cin, name, 'x');
	cout << name << endl;


	return 0;
}
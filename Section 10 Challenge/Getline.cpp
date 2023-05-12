#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{

	string name{};
	string name2{};
	string name3{};

	cout << "What's your full name?" << endl;
	cin >> name;
	cout << name << endl;


	cout << "What's your full name?" << endl;
	getline(cin, name2);
	cout << name2 << endl;

	cout << "What's your full name?" << endl;
	getline(cin, name3, 'x');
	cout << name3 << endl;


	return 0;
}
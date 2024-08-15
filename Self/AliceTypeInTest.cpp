#include <iostream>
#include <string>

using namespace std;

string Input{};

int main()
{

	cout << "Are you a porkie-fat-fat?" << endl;

	cin >> Input;

	if (Input == "yes")
		cout << endl << "How RUDE you dirty fat!";
	else
		cout << endl << "Good girl Alice <3";

	return 0;

};
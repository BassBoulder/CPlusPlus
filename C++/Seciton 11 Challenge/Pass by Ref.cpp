#include <iostream>
#include <string>

using namespace std;

string alpha{"abcdefg"};

void alpha_ref(string& ref alpha);

int main()

{
	cout << alpha << endl;

	cout << alpha_ref() << endl;

	return 0;

}
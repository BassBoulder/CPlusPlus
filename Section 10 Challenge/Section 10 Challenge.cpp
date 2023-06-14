#include <iostream>
#include <string>

using namespace std;

int main()
{
	string alphabet{"AbcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key{"0123456789abcdefghijkABCDEFGHIJKlmnopqrstuvwxyzMNOPQ"};

	string text{};
	cout << "What's the message?" << endl;
	getline(cin, text);

	string encrypted_message{};

	for (char c : text)
	{
		size_t position = alphabet.find(c);
		if (position != string::npos)
		{
			char new_char{ key.at(position) };
			encrypted_message += new_char;
		}
		else
		{
			encrypted_message += c;
		}


	}

	cout << encrypted_message;

	return 0;
}
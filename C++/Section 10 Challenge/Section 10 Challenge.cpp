#include <iostream>
#include <string>

using namespace std;

int main()
{
	string alphabet{ "AbcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key{ "0123456789abcdefghijkABCDEFGHIJKlmnopqrstuvwxyzMNOPQ" };

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


	string decrypted_message{};

	cout << endl << "decrypting message" << endl;

	for (char c : encrypted_message)
	{
		size_t position2 = key.find(c);
		if (position2 != string::npos)
		{
			char new_char2{ alphabet.at(position2) };
			decrypted_message += new_char2;

		}
		else
		{
			decrypted_message += c;
		}
	}

	cout << decrypted_message;

	return 0;
}
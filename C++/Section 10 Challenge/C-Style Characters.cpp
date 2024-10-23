#include <iostream>
#include <cctype>

using namespace std;


int main()
{



	//char my_name[]{ "Nick" };
	//char my_namelonger[8]{ "Nick" };

	//cout << my_name << endl ;
	//cout << my_namelonger << endl;

	//my_namelonger[4] = 'Z';

	//cout << my_namelonger << endl;




		char first_name[10]{};
		char last_name[10]{};
		char full_name[50]{};
		char temp[50]{};

		cout << "What is your first name & last name, with 1 space between them, please?" << endl << endl;

		//cin >> first_name;
		//cin >> last_name;

		//cout << first_name << " " << last_name << endl;

		//strcpy(full_name, first_name);
		//strcat(full_name, " ");
		//strcat(full_name, last_name);

		//cout << full_name << endl;


		cin.getline(full_name, 50);
		cout << "Your full name is " << full_name << endl;
	
		strcpy(temp, full_name);
		if(strcmp(temp, full_name) == 0)
			cout << "match = ";
		else
			cout << "no match = " << endl;

		cout << temp << " " << full_name;



	return 0;
}
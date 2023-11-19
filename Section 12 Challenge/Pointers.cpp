#include <iostream>

using namespace std;

int main()
{
	int cat_number{ 100 };

	cout << cat_number << endl << endl;

	int cat_number_pointer{nullptr};
	cat_number_pointer = *cat_number;

	cout << cat_number_pointer;

	return 0;
	}
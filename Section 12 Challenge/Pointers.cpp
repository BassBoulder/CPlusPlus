#include <iostream>

using namespace std;

int main()
{
	int cat_number{ 100 };

	cout << "Cat Number: " << cat_number << endl << endl;

	int *cat_number_pointer {nullptr};
	
	cout << "NULL Pointer: " << cat_number_pointer;
	
	cat_number_pointer = &cat_number;

	cout << endl;

	cout << "Address of: " << cat_number_pointer << endl;

	cout << "Dereference Pointer: " << *cat_number_pointer << endl;

	return 0;
}
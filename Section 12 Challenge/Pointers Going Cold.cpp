#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> number{ 10, 20, 30 };
	vector<int> *pointer_to_number{nullptr};

	for (auto num : number)
	{
		cout << endl << num;
	}

	pointer_to_number = &number;

	for (auto num : *pointer_to_number)
	{
		cout << endl << num;
	}

	return 0;

}
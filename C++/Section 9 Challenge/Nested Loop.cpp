#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//vector<int> outside_numbers{ 1,2,3,4,5,6,7,8,9,10 };
	//vector<int> inside_numbers{ 1,2,3 };

	//for (auto outside : outside_numbers)
	//{
	//	cout << outside << "\t";
	//}
	//	for (auto inside : inside_numbers)
	//	{
	//		cout << inside << endl;
	//	}

	//for (int num1{ 1 }; num1 <= 10; ++num1) {
	//	for (int num2{ 1 }; num2 <= 5; ++num2) {

	//		cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
	//	}
	//	cout << "-----------------" << endl;
	//}

	int num_items{};

	cout << "How many items? ";
	cin >> num_items;

	vector<int> data{};

	for (int i{ 1 }; i <= num_items; ++i) 
	{
		int data_item{};
		cout << "Enter data item " << i << ": ";
		cin >> data_item;
		data.push_back(data_item);
	}

	cout << "\nDisplaying Histogram" << endl;

	for (auto val : data)
	{
		for (int i{ 1 }; i <= val; ++i)
		{
			if (i % 5 == 0)
				cout << "*";
			else
				cout << "-";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}
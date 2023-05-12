#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
	char choice{};
	vector<int> numbers{};
	int Append_Num_Value{};

	do 
	{
		cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\n";
		cout << "S - Display the smallest number\nL - Display the largest number\nQ - Quit\n\n";
		cout << "Enter your choice" << endl;

		cin >> choice;

		if (choice == 'P')
			for (int i{ 0 }; i < numbers.size(); i++)
			{
				cout << "[ \t" << numbers.at(i) << "\t";
				cout << " ]" << endl;
			}

		if (choice == 'A')
		{
			cout << endl << "What number would you like to add?\n";
			cin >> Append_Num_Value;

			numbers.push_back(Append_Num_Value);
			cout << "Appended: " << Append_Num_Value << endl;
		}

		if (choice == 'M')
			//	//AVERAGE / MEAN of number lsit
		{
			cout << endl << "Mean Number: " << accumulate(numbers.begin(), numbers.end(),0) / numbers.size() << endl;
		}

		if (choice == 'S')
		{ 
			cout << endl << "Min Number: " << *min_element(numbers.begin(), numbers.end()) << endl;
		}

		if (choice == 'L')
		{
			cout << endl << "Max Number: " << *max_element(numbers.begin(), numbers.end()) << endl;
		}

		if (choice == 'Q')
		{
			cout << endl << "Cya" << endl;

			break;
		}
		else if (choice != 'P' && choice != 'A' && choice != 'M' && choice != 'S' && choice != 'L' && choice != 'Q')
			
			cout << "\n---\nUnknown selection, please try again\n---\n\n";

			
	cout << "-----------------------" << endl;

	} while (choice == 'P' || choice == 'A' || choice == 'M' || choice == 'S' || choice == 'L' || choice == 'Q');

	return 0;
}
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void display_menu();
char UPPER_choice();

//Menu prototypes functions
void handle_display(const vector<int>& v);
void Append(vector<int>& v);
void Mean(const vector<int>& v);
void Min(const vector<int>& v);
void Max(const vector<int>& v);
void Find(const vector<int>& v);
void Exit();

//Functions used within functions
void display_list(const vector<int>& v);
double calculate_mean(const vector<int>& v);
int calculate_min(const vector<int>& v);
int calculate_max(const vector<int>& v);
bool finder(const vector<int>& v, int target);

int main()
{
vector<int> numbers{};
char choice{};

do
{
	display_menu();
	choice = UPPER_choice();
	switch (choice)
	{
	case 'P':
		display_list(numbers);
		break;
	case 'A':
		Append(numbers);
		break;
	case 'M':
		Mean(numbers);
		break;
	case 'S':
		Min(numbers);
		break;
	case 'L':
		Max(numbers);
		break;
	case 'F':
		Find(numbers);
		break;
	case 'Q':
		Exit;
		break;
	default:
		cout << "Please type in an appropriate number" << endl;
	}
} while (choice != 'Q');
	cout << endl;
	cout << "\n---\nUnknown selection, please try again\n---\n\n";
	cout << "-----------------------" << endl;
	return 0;

}

char UPPER_choice()
{
	char choice{};
	cin >> choice;
	return toupper(choice);
}

void handle_display(const vector<int> &v)
{
	if (v.size() == 0)
		cout << "The list is empty" << endl;
	else
		display_list(v);
}

void display_list(const vector<int>& v)
{
	cout << '[';
	for (auto num : v)
		cout << num << ' ';
	cout << ']' << endl;
}

void display_menu()
{

	cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\n";
	cout << "S - Display the smallest number\nL - Display the largest number\nQ - Quit\n\n";
	cout << "F - Find a number" << endl;
	cout << "Enter your choice" << endl;
}

void Append(vector<int> &v)
{
	int num_to_append{};
	cout << endl << "What number would you like to add?\n";
	cin >> num_to_append;
	v.push_back(num_to_append);
	cout << "Appended: " << num_to_append << endl;
}

void Mean(const vector<int> &v)
{
	if (v.size() == 0)
		cout << "Unable to calculate mean on empty list" << endl;
	else
		cout << "The mean is: " << calculate_mean(v) << endl;
}

void Min(const vector<int> &v)
{
	if (v.size() == 0)
		cout << "List is empty, can't do Minimum" << endl;
	else
		cout << "Min Number: " << calculate_min(v) << endl;
}

void Max(const vector<int> &v)
{
	if (v.size() == 0)
		cout << "List is empty, can't do Maximum" << endl;
	else
		cout << "Max Number: " << calculate_max(v) << endl;
}

void Find(const vector<int> &v)
{
	int target{};
	cout << "Enter the number to find: ";
	cin >> target;

	if (finder(v, target))
		cout << target << " was found";
	else
		cout << target << " wasn't found" << endl;
}

void Exit()
{
	cout << endl << "Cya" << endl;
}

double calculate_mean(const vector<int> &v)
{
	int total{};
	for (auto num : v)
		total += num;
	return static_cast<double>(total) / v.size();
}

int calculate_min(const vector<int> &v)
{
	int min = v.at(0);
	for (auto num : v)
		if (num < min)
			min = num;
	return min;
}

int calculate_max(const vector<int> &v)
{
	int max = v.at(0);
	for (auto num : v)
		if (num > max)
			max = num;
	return max;
}

bool finder(const vector<int> &v, int target)
{
	for (auto num : v)
		if (num == target)
		return true;
	return false;
}
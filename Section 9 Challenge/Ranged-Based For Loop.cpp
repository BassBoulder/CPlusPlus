#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	int scores[]{ 1,2,3 };
	int running_scores{};

		for (auto score : scores)
			running_scores += score;
			cout << running_scores << endl;

		for (int score : scores)
			running_scores += score;
		cout << running_scores << endl;
		
		for (int score : scores)
			cout << score << endl;

		cout << endl << endl;

	vector<double> temps{ 50.0, 60.6, 90.9, 112.0 };
	double average_temp{};
	double total{};

		for (auto temp : temps)
			total += temp;

		if (temps.size() != 0)
			average_temp = total / temps.size();

		cout << fixed << setprecision(1);

		cout << "Average Temp is: " << average_temp << endl;

	for (auto val : { 1,2,3,4,5 })
		cout << val << endl;


	for (auto c : "Hey there monkey fat boy!")
		if(c != ' ')
			cout << c;
			cout << endl;

	for (auto c : "Hey there monkey fat boy!")
		if (c == ' ')
			cout << "\t";
		else
			cout << c;

	return 0;

}
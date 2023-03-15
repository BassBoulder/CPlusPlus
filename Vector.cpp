#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <int> scores {1, 2, 3, 4, 5};
	vector <int> scores_2 (5,1);
	vector <char> letters { 'a','b','c','d','e' };

	vector <vector<int>> top_scores
	{
		{1,5},
		{1,2},
		{5,1},
	};

	cout << top_scores.at(0).at(0);
	cout << top_scores.at(2).at(1);
	cout << top_scores.at(2).at(0);



	//cout << scores.at(0) << " - " << scores.at(4);

	//scores.push_back(100);

	//cout << "\n\n\n" << scores.at(5);

	//cout << "\n\t\n\t" << letters.at(3);

	//cout << "\n" << scores_2.at(3);

	//cin >> scores_2.at(0);

	//cout << scores_2.at(0);

	//cin >> letters.at(0);

	//cout << letters.at(0);

	return 0;
}
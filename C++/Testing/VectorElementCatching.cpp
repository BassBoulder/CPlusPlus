#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> studentScores{ 1,10,100,1000 };
int threshold{ 40 };

int splitScores(vector<int> scoresIn, int minimum) {


	return minimum / 4;
}


int main() 
{
	splitScores(studentScores, threshold);


	return 0;
}
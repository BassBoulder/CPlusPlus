#include <iostream>
#include <iomanip>

using namespace std;

//int main()
//{
//	double cost{};
//	
//	cout << "How much does it cost?" << endl;
//	cin >> cost;
//
//	while (cost > 15)
//	{
//		double haggle = (cost -= 0.01);
//		cout << "I'm going to haggle you to: " << haggle << endl;
//
//
//	cout << "Now " << haggle << ", is a good deal wouldn't you say?" << endl;
//	}
//
//	return 0;
//}

int main()
{
	cout << fixed << setprecision(2);

	int num{};
	cin >> num;

	int i{ 20 };
	while (num > i)
	{
		cout << i << endl;
		i++;
	}
	return 0;

}
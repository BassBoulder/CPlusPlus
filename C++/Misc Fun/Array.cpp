#include <iostream>

using namespace std;

int main()
{
	char vowels[]{ 'a','e','i','o','u' };
	cout << "\nThe first voewl is: " << vowels[0] << endl;
	cout << "The last vowel is: " << vowels[4] << endl;

	double hi_temps[] {90.1, 89.8, 77.5, 81.6};
	cout << "\nThe first high temp is: " << hi_temps[0];

	hi_temps[0] = 100.7;
	cout << "\nThe first high temp is: " << hi_temps[0] << endl;
	

	cout << hi_temps[1] << endl;;
	cin >> hi_temps[1];
	cout << hi_temps[1];

	//cin >> hi_temps[5];
	//cout << hi_temps[5];

	return 0;
}
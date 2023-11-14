#include <iostream>

using namespace std;

void nick_noodles(int a, int b)
{
	cout << a * b;
};


int main()
{
	cout << "Pick 2 numbers for nick noodles" << endl;


	int a{};
	int b{};

	cin >> a >> b;

	nick_noodles(a, b);


	return 0;

}
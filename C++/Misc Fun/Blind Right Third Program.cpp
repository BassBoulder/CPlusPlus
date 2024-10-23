#include <iostream>
#include <chrono>
#include <dos.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	long long favynumber;

	cout << "What is your favy num? " << endl;

	cin >> favynumber;

	cout << "Hey bro, that's mad wild bro, my favy num is 1 less than yours: " << endl
		<< "It's: " << (favynumber - 1) << endl;

	return 0;
	
}
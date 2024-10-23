#include <iostream>
#include <string>

using namespace std;

int main()
{
	int valuein{};
	//string result{};

		cin >> valuein;

		//result = (valuein < 10) ? "<10" : ">=10";

		//cout << result;

		cout << ( //EXTRA BRACKET USING VALUES
					(valuein < 10) ? "<10" : ">=10"
				);// WITHOUT EXTRA BRACKET IT BECOMES 0 or 1 / BOOL style

	return 0;
}

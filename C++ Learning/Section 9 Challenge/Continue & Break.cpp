#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{

vector<int> a123 {1,2,3,4};

	for (auto val : a123)
	{
		if  (val == 4)
	 
			break;
	
		else if  (val == 1 || val == 2)
	
			continue;

		else
			cout << val << endl;
}

	return 0;
}
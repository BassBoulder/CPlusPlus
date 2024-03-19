#include <iostream>

using namespace std;



class Player
{
private:
	string name{ "Nick" };
	float health{ 100 };
public:
	bool is_dead{ 0 };
};

int main()
{
	Player Nick;
	//Nick.name = "Nick"; // << can't as it's private
	Nick.is_dead = true; // << can as it's public

	cout << Nick.is_dead;

	return 0;
}
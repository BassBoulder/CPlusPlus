#include <iostream>
#include <string>

using namespace std;

class Player {
private: string name;
public: string get_name() const
{
	return name;
}
void set_name(string name_val)
{
	name = name_val;
}

Player();
Player(string name_val);
};

Player::Player()
	: Player{ "None" } {
}

Player::Player(string name_val)
	: name{ name_val } {
}


void display_get_name(const Player &p)
{
	cout << p.get_name();
}

int main()
{
	const Player villain{ "Villain" };

	display_get_name(villain);

	return 0;
}
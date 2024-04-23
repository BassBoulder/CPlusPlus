#include <iostream>
#include "Player.h"

using namespace std;


int main()
{
	Player JohnnyMan;
	//Nick.name = "Nick"; // << can't as it's private
	JohnnyMan.is_dead = true; // << can as it's public

	cout << JohnnyMan.is_dead;

	return 0;
} 
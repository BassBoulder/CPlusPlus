#pragma once
#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
private:
	std::string name{ "JohnnyMan" };
	float health{ 100 };
public:
	bool is_dead{ 0 };
};

#endif // _PLAYER_H_
#pragma once
#include<vector>
#include<iostream>
#include<fstream>
#include"State.h"
#include"Player.h"
#include<iomanip>

class Game
{
private:
	Player* player;
public:
	Game();
	virtual ~Game();
	void update();
	std::string playername;
};


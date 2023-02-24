#pragma once
#include<vector>
#include<iostream>
#include<fstream>
#include"State.h"
#include"Player.h"
#include<iomanip>
#include<stack>
#include "GameState.h"

class Game
{
private:
	std::stack<State*> states;


	Player* player;
public:
	Game();
	virtual ~Game();
	void update();
	static std::string playername;
	bool quit = false;
};


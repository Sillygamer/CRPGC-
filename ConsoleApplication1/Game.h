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
	unsigned activecharacter;
	std::vector<Player*>playerlist;
 
public:
	Game(unsigned activecharacter);
	virtual ~Game();
	void update();
	static std::string playername;
	bool quit = false;
};


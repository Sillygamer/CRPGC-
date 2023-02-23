#pragma once
#include<iostream>
#include"State.h"
#include"Player.h"
#include<iomanip>
#include<stack>
#include "GameState.h"
#include "Game.h"

class MainMenuState
	: public State
{
private:
	Player* player;
	std::stack<State*>* states;
public:
	MainMenuState(Player* player, std::stack<State*>* states);
	virtual ~MainMenuState();
	void update();
	void printmenu();
	void updatemenu();
	std::string choice;
};


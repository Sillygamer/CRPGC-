#pragma once
#include<iostream>
#include"State.h"
#include"Player.h"
#include<iomanip>
#include<stack>
#include "GameState.h"
#include "Game.h"
#include "CharacterCreatorState.h"

class MainMenuState
	: public State
{
private:
	std::vector<Player*>* playerlist;

	unsigned& activecharacter;
	std::stack<State*>* states;
public:
	MainMenuState(std::vector<Player*>* playerlist,  unsigned& activecharacter, std::stack<State*>* states);
	virtual ~MainMenuState();
	void update(); 
	void printmenu();
	void updatemenu();
	std::string choice;
};


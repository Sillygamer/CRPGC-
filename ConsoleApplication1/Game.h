#pragma once

#include <iostream>
#include "Functions.h"
#include <string>
#include <iomanip>
#include <ctime>
class Game
{
public:
	Game();
	virtual ~Game();

	//operators

	//Functions
	void mainMenu();
	

	//accessors
	bool getplaying() const { return this->playing;}

	//modifiers

private:
	int choice;
	bool playing;
};


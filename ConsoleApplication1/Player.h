#pragma once
#include<cmath>
#include<string>
#include<iostream>
#include<vector>
#include<sstream>
#include "Game.h"

class Player
{
private:
	int hp;
	int hpmax;
	int level;
	int exp;
	int expnext;
	int gold;


	void updateStats();
public:
	std::string& Playername = Game::playername;
	std::string name;
	Player(std::string name, std::string& playername);
	virtual ~Player();
	const std::string toString();
	Player();
	const std::string getMenuBar();
	bool updatelevel();
};


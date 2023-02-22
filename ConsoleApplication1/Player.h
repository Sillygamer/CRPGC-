#pragma once
#include<cmath>
#include<string>
#include<iostream>
#include<vector>
#include<sstream>
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
	std::string name = "Andrea";
	Player(std::string name);
	virtual ~Player();
	const std::string toString();
	Player();
	const std::string getMenuBar();
	bool updatelevel();
};


#pragma once
#include<iostream>
#include "Location.h"
#include "World.h"

using namespace std;
class Player
{
private:


protected:



public:
	string Name;
	Location currentlocation;
	World world;
	Player();
	virtual ~Player();
	void moveto(Location loc);
	void movetnorth();
	void movesouth();
	void movewest();
	void moveeast();
};


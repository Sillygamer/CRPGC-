#pragma once
#include<iostream>
#include "Location.h"
#include "World.h"
#include "Creature.h"
#include<cmath>
#include "PlayerQuest.h"
#include "InventoryItem.h"
#include <vector>
using namespace std;
class Player :
	public Creature
{
private:


protected:



public:
	string Name;
	Location currentlocation;
	vector<InventoryItem> inventory;
	vector<PlayerQuest> quests;
	World world;
	int xp;
	int level;
	int gold;
	int xptonextlevel;
	Player();
	virtual ~Player();
	void moveto(Location loc);
	void movetnorth();
	void movesouth();
	void movewest();
	void moveeast();
};


#pragma once
#include <iostream>
#include "Location.h"
#include <list>
#include <algorithm>
#include <vector>
#include "Weapons.h"
#include "HealingPotion.h"
#include "Item.h"
using namespace std;

class World
{
private:
	//start inputing world
public:
	string WorldName = "Candyland";
	vector<Location> locations;


	World();
	virtual ~World();
	void PopulateLocations();
	vector<Item> Items;
	vector<Monster> Monsters;
	vector<Quest> Quests;
	void PopulateMonsters();
	const int ITEM_ID_RUSTY_SWORD = 1;
	const int ITEM_ID_RAT_TAIL = 2;
	const int ITEM_ID_PIECE_OF_FUR = 3;
	const int ITEM_ID_SNAKE_FANG = 4;
	const int ITEM_ID_SNAKESKIN = 5;
	const int ITEM_ID_CLUB = 6;
	const int ITEM_ID_HEALING_POTION = 7;
	const int ITEM_ID_SPIDER_FANG = 8;
	const int ITEM_ID_SPIDER_SILK = 9;
	const int ITEM_ID_ADVENTURER_PASS = 10;
    void PopulateQuests()
	const int MONSTER_ID_RAT = 1;
	const int MONSTER_ID_SNAKE = 2;
	const int MONSTER_ID_GIANT_SPIDER = 3;

	const int QUEST_ID_CLEAR_ALCHEMIST_GARDEN = 1;
	const int QUEST_ID_CLEAR_FARMERS_FIELD = 2;
	void PopulateItems();

	int LOCATION_ID_GINGERBREAD_HOUSE = 1;
	int LOCATION_ID_CANDYCANE_FOREST = 2;
	int LOCATION_ID_GUMDROP_VILLAGE = 3;
	int LOCATION_ID_CANDY_CASTLE = 4;
	int LOCATION_ID_CANDY_STORE = 5;
	int LOCATION_ID_LICORICE_FOREST = 6;
	Location GingerbreadHouse;
	Location CandyStore;
	Location CandyCastle;
	Location GumdropVillage;
	Location CandyCaneForest;
	Location LicoriceForest;
	void ListLocations();
	Location Locationbyid(int id);
};


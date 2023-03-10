#pragma once
#include <iostream>
#include "Location.h"
#include <list>
#include <algorithm>
#include <vector>
#include "Weapons.h"
#include "HealingPotion.h"
#include "Item.h"
#include "Monster.h"
using namespace std;

class World
{
private:
	//start inputing world
public:
	string WorldName = "Candyland";
	vector<Location> locations;
	vector<Item> Items;
	vector<Monster> Monsters;
	vector<Quest> Quests;

	World();
	virtual ~World();
	void PopulateLocations();

	void PopulateMonsters();
	const int ITEM_ID_CANDY_SWORD = 1;
	const int ITEM_ID_GUMDROPBUTTON= 2;
	const int ITEM_ID_GINGERBREADCHUNK = 3;
	const int ITEM_ID_CANDYCANEANTENNAE = 4;
	const int ITEM_ID_CANDYTOOTH = 5;
	const int ITEM_ID_GUMDROPSWORD = 6;
	const int ITEM_ID_HEALING_POTION = 7;
	const int ITEM_ID_LICORICEPIECE = 8;
	const int ITEM_ID_LICORICEHAT = 9;
	const int ITEM_ID_CATSLEKEYS = 10;
	
	const int MONSTER_ID_EVILGINGERBREADMAN = 1;
	const int MONSTER_ID_CANDYCANEWORM = 2;
	const int MONSTER_ID_LICORICEHENCHMAN = 3;
	void PopulateItems();

	int LOCATION_ID_GINGERBREAD_HOUSE = 1;
	int LOCATION_ID_CANDYCANE_FOREST = 2;
	int LOCATION_ID_GUMDROP_VILLAGE = 3;
	int LOCATION_ID_CANDY_CASTLE = 4;
	int LOCATION_ID_CANDY_STORE = 5;
	int LOCATION_ID_LICORICE_FOREST = 6;
	int LOCATION_ID_LICORICE_CASTLE = 7;
	int LOCATION_ID_GINGERBREAD_HUT = 8;
	int LOCATION_ID_GINGERBREAD_FOREST = 9;

	int QUEST_ID_DefeatLicoriceHenchman = 1;
	int QUEST_ID_CollectGumdrops = 2;
	int QUEST_ID_SavetheGarden = 3;

	Location GingerbreadHouse;
	Location CandyStore;
	Location CandyCastle;
	Location GumdropVillage;
	Location CandyCaneForest;
	Location LicoriceForest;
	Location LicoriceCastle;
	Location GingerbreadHut;
	Location GingerbreadForest;
	
	LootItem gumdropButton;
	LootItem GingerbreadChunk;
	LootItem CandyCaneAntenne;
	LootItem candyTooth;
	LootItem Licoricepiece;
	LootItem Licoricehat;
	LootItem GumdropSword;

	Item gumdropButton1;
	Item GingerbreadChunk1;
	Item CandyCaneAntenne1;
	Item candyTooth1;
	Item Licoricepiece1;
	Item Licoricehat1;
	Weapons GumdropSword1;
	Weapons CandySword;
	HealingPotion healingpotion;
	Item Castlekeys;

	Monster EvilGingerbreadMan;
	Monster CandyCaneWorm;
	Monster LicoriceHenchmen;

	Quest DefeatLicoriceHenchman;
	Quest CollectGumdrops;
	Quest SavetheGarden;
	QuestCompletionItem licoricehat;
	QuestCompletionItem Gumdropbutton;
	QuestCompletionItem Candyteeth;
	void ListLocations();
	void ListItems();
	void ListMonsters();
	void ListQuests();
	Location Locationbyid(int id);
	Monster MonsterByID(int id);
    Quest QuestByID(int id);
    Item ItemByID(int id);
	void PopulateQuests();
};


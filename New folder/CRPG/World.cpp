#include "World.h"

World::World()
{


	PopulateLocations();
	PopulateItems();
	PopulateMonsters();
	PopulateQuests();
}

World::~World()
{

}

void World::PopulateLocations()
{
	GingerbreadHouse.ID = LOCATION_ID_GINGERBREAD_HOUSE;
	GingerbreadHouse.name = "The Gingerbread House";
	GingerbreadHouse.Description = 
		"The house you are allowed to stay in for the time being.\n"
		"It smells so delicious its tempting to eat,"
		" but then you wouldn't have a place to stay.\n\n";

	CandyCaneForest.ID = LOCATION_ID_CANDYCANE_FOREST;
	CandyCaneForest.name = "The Candy Cane Forest";
	CandyCaneForest.Description = 
		"Tall Candycane Trees as far as the eye can see\n\n";
	
	GumdropVillage.ID = LOCATION_ID_GUMDROP_VILLAGE;
	GumdropVillage.name = "Gumdrop Village";
	GumdropVillage.Description =
		"The bussling heart of candy land, although it's seen better days...\n\n";

	CandyCastle.ID = LOCATION_ID_CANDY_CASTLE;
	CandyCastle.name = "Candy Castle";
	CandyCastle.Description = 
		"The castle where the great King Candy lives.. or used to.\n\n";


	CandyStore.ID = LOCATION_ID_CANDY_STORE;
	CandyStore.name = "Candy Store";
	CandyStore.Description =
		"The candy store where you can get all your candy needs\n\n";


	LicoriceForest.ID = LOCATION_ID_LICORICE_FOREST;
	LicoriceForest.name = "Licorice Forest";
	LicoriceForest.Description = 
		"A dark forest of licorice. It never seems to turn day here...\n\n";
	
	
	GingerbreadHouse.IDlocationnorth = LOCATION_ID_CANDYCANE_FOREST;

	CandyCaneForest.IDlocationnorth = LOCATION_ID_GUMDROP_VILLAGE;
	CandyCaneForest.IDlocationsouth = LOCATION_ID_GINGERBREAD_HOUSE;

	GumdropVillage.IDlocationnorth = LOCATION_ID_CANDY_CASTLE;
	GumdropVillage.IDlocationeast = LOCATION_ID_LICORICE_FOREST;
	GumdropVillage.IDlocationsouth = LOCATION_ID_CANDYCANE_FOREST;
	GumdropVillage.IDlocationwest = LOCATION_ID_CANDY_STORE;

	LicoriceForest.IDlocationwest = LOCATION_ID_GUMDROP_VILLAGE;

	CandyStore.IDlocationeast = LOCATION_ID_GUMDROP_VILLAGE;

	CandyCastle.IDlocationsouth = LOCATION_ID_GUMDROP_VILLAGE;


	locations.push_back(GingerbreadHouse);
	locations.push_back(CandyStore);
	locations.push_back(CandyCastle);
	locations.push_back(GumdropVillage);
	locations.push_back(CandyCaneForest);
	locations.push_back(LicoriceForest);
}

void World::PopulateMonsters()
{
	EvilGingerbreadMan.Name = "Evil Gingerbrad Man";
	EvilGingerbreadMan.ID = MONSTER_ID_EVILGINGERBREADMAN;
	EvilGingerbreadMan.maxdamage = 20;
	EvilGingerbreadMan.rewardxp = 5;
	EvilGingerbreadMan.rewardgold = 40;
	EvilGingerbreadMan.currenthp = 20;
	EvilGingerbreadMan.maxhp = 20;


	gumdropButton.Details.Name = "Gumdrop Button";
	gumdropButton.Details.ID = ITEM_ID_GUMDROPBUTTON;
	gumdropButton.DropPercentage = 25;
	gumdropButton.IsDefaultItem = false;
	gumdropButton.Details.pluralName = "Gumdrop Buttons";
	EvilGingerbreadMan.loottable.push_back(gumdropButton);

	GingerbreadChunk.Details.Name = "Gingerbread Chunk";
	GingerbreadChunk.Details.ID = ITEM_ID_GINGERBREADCHUNK;
	GingerbreadChunk.DropPercentage = 75;
	GingerbreadChunk.IsDefaultItem = true;
	GingerbreadChunk.Details.pluralName = "Gingerbread Chunks";
	EvilGingerbreadMan.loottable.push_back(GingerbreadChunk);

	GumdropSword.Details.Name = "Gumdrop Sword";
	GumdropSword.Details.ID = ITEM_ID_GUMDROPSWORD;
	GumdropSword.DropPercentage = 75;
	GumdropSword.IsDefaultItem = true;
	GumdropSword.Details.pluralName = "Gumdrop Swords";
	EvilGingerbreadMan.loottable.push_back(GumdropSword);

	CandyCaneWorm.Name = "Candy Cane Worm";
	CandyCaneWorm.ID = MONSTER_ID_CANDYCANEWORM;
	CandyCaneWorm.maxdamage = 7;
	CandyCaneWorm.rewardxp = 3;
	CandyCaneWorm.rewardgold = 10;
	CandyCaneWorm.currenthp = 15;
	CandyCaneWorm.maxhp = 10;

	CandyCaneAntenne.Details.Name = "CandyCane Antennae";
	CandyCaneAntenne.Details.ID = ITEM_ID_CANDYCANEANTENNAE;
	CandyCaneAntenne.DropPercentage = 75;
	CandyCaneAntenne.IsDefaultItem = true;
	CandyCaneAntenne.Details.pluralName = "CandyCane Antennaes";
	CandyCaneWorm.loottable.push_back(CandyCaneAntenne);

	candyTooth.Details.Name = "Candy Tooth";
	candyTooth.Details.ID = ITEM_ID_CANDYTOOTH;
	candyTooth.DropPercentage = 75;
	candyTooth.IsDefaultItem = false;
	candyTooth.Details.pluralName = "Candy Teeth";
	CandyCaneWorm.loottable.push_back(candyTooth);

	LicoriceHenchmen.Name = "Licorice Henchman";
	LicoriceHenchmen.ID = MONSTER_ID_LICORICEHENCHMAN;
	LicoriceHenchmen.maxdamage = 7;
	LicoriceHenchmen.rewardxp = 3;
	LicoriceHenchmen.rewardgold = 10;
	LicoriceHenchmen.currenthp = 15;
	LicoriceHenchmen.maxhp = 15;

	Licoricepiece.Details.Name = "Licorice Piece";
	Licoricepiece.Details.ID = ITEM_ID_LICORICEPIECE;
	Licoricepiece.DropPercentage = 75;
	Licoricepiece.IsDefaultItem = true;
	Licoricepiece.Details.pluralName = "Licorice Pieces";
	LicoriceHenchmen.loottable.push_back(Licoricepiece);
	
	Licoricehat.Details.Name = "Licorice Hat";
	Licoricehat.Details.ID = ITEM_ID_LICORICEHAT;
	Licoricehat.DropPercentage = 75;
	Licoricehat.IsDefaultItem = false;
	Licoricehat.Details.pluralName = "Licorice Hats";
	LicoriceHenchmen.loottable.push_back(Licoricehat);

	Monsters.push_back(LicoriceHenchmen);
	Monsters.push_back(CandyCaneWorm);
	Monsters.push_back(EvilGingerbreadMan);
}

void World::PopulateItems()
{
	gumdropButton1.Name = "Gumdrop Button";
	gumdropButton1.ID = ITEM_ID_GUMDROPBUTTON;
	gumdropButton1.pluralName = "Gumdrop Buttons";

	GingerbreadChunk1.Name = "Gingerbread Chunk";
	GingerbreadChunk1.ID = ITEM_ID_GINGERBREADCHUNK;
	GingerbreadChunk1.pluralName = "Gingerbread Chunks";

	CandyCaneAntenne1.Name = "CandyCane Antennae";
	CandyCaneAntenne1.ID = ITEM_ID_CANDYCANEANTENNAE;
	CandyCaneAntenne1.pluralName = "CandyCane Antennaes";

	GumdropSword1.Name = "Gumdrop Sword";
	GumdropSword1.ID = ITEM_ID_GUMDROPSWORD;
	GumdropSword1.pluralName = "Gumdrop Swords";
	GumdropSword1.maxdamage = 10;
	GumdropSword1.mindamage = 5;

	candyTooth1.Name = "Candy Tooth";
	candyTooth1.ID = ITEM_ID_CANDYTOOTH;
	candyTooth1.pluralName = "Candy Teeth";

	Licoricepiece1.Name = "Licorice Piece";
	Licoricepiece1.ID = ITEM_ID_LICORICEPIECE;
	Licoricepiece1.pluralName = "Licorice Pieces";

	Licoricehat1.Name = "Licorice Hat";
	Licoricehat1.ID = ITEM_ID_LICORICEHAT;
	Licoricehat1.pluralName = "Licorice Hats";

	CandySword.Name = "Candy Sword";
	CandySword.ID = ITEM_ID_CANDY_SWORD;
	CandySword.pluralName = "Candy Swords";
	CandySword.maxdamage = 5;
	CandySword.mindamage = 0;

	healingpotion.Name = "Healing Potion";
	healingpotion.ID = ITEM_ID_HEALING_POTION;
	healingpotion.pluralName = "Healing Potions";
	healingpotion.heal = 10;

	Castlekeys.Name = "Castle Key";
	Castlekeys.ID = ITEM_ID_CATSLEKEYS;
	Castlekeys.pluralName = "Castle Keys";

	Items.push_back(gumdropButton1);
	Items.push_back(GingerbreadChunk1);
	Items.push_back(CandyCaneAntenne1);
	Items.push_back(candyTooth1);
	Items.push_back(Licoricepiece1);
	Items.push_back(Licoricehat1);
	Items.push_back(GumdropSword1);
	Items.push_back(CandySword);
	Items.push_back(healingpotion);
	//Items.push_back(new Weapons(ITEM_ID_RUSTY_SWORD, "Rusty sword", "Rusty swords", 0, 5));
	//Items.push_back(new HealingPotion(ITEM_ID_HEALING_POTION, "Healing potion", "Healing potions", 5));
	//Items.push_back(new Item(ITEM_ID_ADVENTURER_PASS, "Adventurer pass", "Adventurer passes"));

}

void World::ListLocations()
{
	cout << " These are the Locations in the world...\n\n " 
		<< GingerbreadHouse.name << "\n "
		<< CandyCaneForest.name << "\n "
		<< GumdropVillage.name << "\n "
		<< CandyCastle.name << "\n "
		<< CandyStore.name << "\n "
		<< LicoriceForest.name << "\n\n";
}
void World::ListItems()
{
	cout << " These are the Items in the world...\n\n "
		<< CandySword.Name << "\n "
		<< healingpotion.Name << "\n "
		<< Castlekeys.Name << "\n "
		<< gumdropButton.Details.Name << "\n "
		<< GingerbreadChunk.Details.Name << "\n "
		<< GumdropSword.Details.Name << "\n "
		<< CandyCaneAntenne.Details.Name << "\n "
		<< candyTooth.Details.Name << "\n "
		<< Licoricepiece.Details.Name << "\n "
		<< Licoricehat.Details.Name << "\n\n";
}
void World::ListMonsters()
{
	cout << " These are the Monsters in the world...\n\n "
		<< EvilGingerbreadMan.Name << "\n "
		<< CandyCaneWorm.Name << "\n "
		<< LicoriceHenchmen.Name << "\n\n";
}
Location World::Locationbyid(int id)
{
	for(Location loc : locations)
	{
		if (loc.ID == id) 
		{
			return loc;
		}
		
	}

}

Monster World::MonsterByID(int id)
{
	for (Monster monster : Monsters)
	{
		if (monster.ID == id)
		{
			return monster;
		}
	}
}

Quest World::QuestByID(int id)
{
	for (Quest quest : Quests)
	{
		if (quest.ID == id)
		{
			return quest;
		}
	}
}

void World::PopulateQuests()
{/*
	Quest clearAlchemistGarden =
		new Quest(
			QUEST_ID_CLEAR_ALCHEMIST_GARDEN,
			"Clear the alchemist's garden",
			"Kill rats in the alchemist's garden and bring back 3 rat tails. \nYou will receive a healing potion and 10 gold pieces.", 20, 10);

	clearAlchemistGarden.QuestCompletionItems.Add(new QuestCompletionItem(ItemByID(ITEM_ID_RAT_TAIL), 3));

	clearAlchemistGarden.RewardItem = ItemByID(ITEM_ID_HEALING_POTION);

	Quest clearFarmersField =
		new Quest(
			QUEST_ID_CLEAR_FARMERS_FIELD,
			"Clear the farmer's field",
			"Kill snakes in the farmer's field and bring back 3 snake fangs. \nYou will receive an adventurer's pass and 20 gold pieces.", 20, 20);

	clearFarmersField.QuestCompletionItems.Add(new QuestCompletionItem(ItemByID(ITEM_ID_SNAKE_FANG), 3));

	clearFarmersField.RewardItem = ItemByID(ITEM_ID_ADVENTURER_PASS);

	Quests.Add(clearAlchemistGarden);
	Quests.Add(clearFarmersField);*/
}


//need to change

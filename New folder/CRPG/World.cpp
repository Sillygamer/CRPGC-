#include "World.h"

World::World()
{	PopulateMonsters();
	PopulateItems();
	PopulateQuests();
	PopulateLocations();



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
	
	LicoriceCastle.ID = LOCATION_ID_LICORICE_CASTLE;
	LicoriceCastle.name = "Licorice Castle";
	LicoriceCastle.Description = "Where Lord Licorice lives... very spooky...";

	GingerbreadHut.ID = LOCATION_ID_GINGERBREAD_HUT;
	GingerbreadHut.name = "Ginger Bread Hut";
	GingerbreadHut.Description = "A rest place made of gingerbread";

	GingerbreadForest.ID = LOCATION_ID_GINGERBREAD_FOREST;
	GingerbreadForest.name = "The Gingerbread Forest";
	GingerbreadHut.Description = "A forest made of gingerbread";
	
	GingerbreadHouse.IDlocationnorth = LOCATION_ID_CANDYCANE_FOREST;

	CandyCaneForest.IDlocationnorth = LOCATION_ID_GUMDROP_VILLAGE;
	CandyCaneForest.IDlocationsouth = LOCATION_ID_GINGERBREAD_HOUSE;

	GumdropVillage.IDlocationnorth = LOCATION_ID_GINGERBREAD_HUT;
	GumdropVillage.IDlocationeast = LOCATION_ID_LICORICE_FOREST;
	GumdropVillage.IDlocationsouth = LOCATION_ID_CANDYCANE_FOREST;
	GumdropVillage.IDlocationwest = LOCATION_ID_CANDY_STORE;

	LicoriceForest.IDlocationwest = LOCATION_ID_GUMDROP_VILLAGE;
	LicoriceForest.IDlocationeast = LOCATION_ID_LICORICE_CASTLE;

	CandyStore.IDlocationeast = LOCATION_ID_GUMDROP_VILLAGE;

	CandyCastle.IDlocationsouth = LOCATION_ID_GINGERBREAD_HUT;

	LicoriceCastle.IDlocationwest = LOCATION_ID_LICORICE_FOREST;

	GingerbreadHut.IDlocationeast = LOCATION_ID_GINGERBREAD_FOREST;
	GingerbreadHut.IDlocationnorth = LOCATION_ID_CANDY_CASTLE;
	GingerbreadHut.IDlocationsouth = LOCATION_ID_GUMDROP_VILLAGE;

	GingerbreadForest.IDlocationwest = LOCATION_ID_GINGERBREAD_HUT;

	GingerbreadHouse.questhere = QuestByID(QUEST_ID_SavetheGarden);
	GumdropVillage.questhere = QuestByID(QUEST_ID_DefeatLicoriceHenchman);
	GingerbreadHut.questhere = QuestByID(QUEST_ID_CollectGumdrops);

	CandyCaneForest.monsterhere = MonsterByID(MONSTER_ID_CANDYCANEWORM);
	LicoriceForest.monsterhere = MonsterByID(MONSTER_ID_LICORICEHENCHMAN);
	GingerbreadForest.monsterhere = MonsterByID(MONSTER_ID_EVILGINGERBREADMAN);
	
	CandyCastle.Requiredtoenter = Castlekeys;

	locations.push_back(GingerbreadHouse);
	locations.push_back(CandyStore);
	locations.push_back(CandyCastle);
	locations.push_back(GumdropVillage);
	locations.push_back(CandyCaneForest);
	locations.push_back(LicoriceForest);
	locations.push_back(LicoriceCastle);
	locations.push_back(GingerbreadHut);
	locations.push_back(GingerbreadForest);
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
		<< LicoriceForest.name << "\n "
		<< LicoriceCastle.name << "\n "
		<< GingerbreadHut.name <<"\n " 
		<< GingerbreadForest.name << "\n\n";
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
void World::ListQuests()
{
	cout << " These are the Quests in the world...\n\n "
		<< DefeatLicoriceHenchman.Name << "\n "
		<< CollectGumdrops.Name << "\n "
		<< SavetheGarden.Name << "\n\n";
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
Item World::ItemByID(int id)
{	
	for(Item item : Items)
	{
		if (item.ID == id)
		{
			return item;
		}
	}

}
void World::PopulateQuests()
{
	DefeatLicoriceHenchman.ID = QUEST_ID_DefeatLicoriceHenchman;
	DefeatLicoriceHenchman.Name = "Defeat Licorice Henchman";
	DefeatLicoriceHenchman.Description = "Defeat Licorice henchman and bring back 5 hats as proof.\n"
		"You will receive the castle keys and 20 gold";
	DefeatLicoriceHenchman.rewardgold = 20;
	DefeatLicoriceHenchman.rewardxp = 20;
	DefeatLicoriceHenchman.RewardItem = Castlekeys;

	licoricehat.Details.Name = "Licorice Hat";
	licoricehat.Details.ID = ITEM_ID_LICORICEHAT;
	licoricehat.Details.pluralName = "Licorice Hats";
	licoricehat.quantity = 5;
	DefeatLicoriceHenchman.Completionitems.push_back(licoricehat);

	CollectGumdrops.ID = QUEST_ID_CollectGumdrops;
	CollectGumdrops.Name = "Collect gumdrops";
	CollectGumdrops.Description = "evil gingerbread man stole my gumdrops. please get them back for me, there are three.\n"
		"You will receive the health potion and 10 gold";
	CollectGumdrops.rewardgold = 10;
	CollectGumdrops.rewardxp = 20;
	CollectGumdrops.RewardItem = ItemByID(ITEM_ID_HEALING_POTION);

	Gumdropbutton.Details.Name = "Gumdrop Button";
	Gumdropbutton.Details.ID = ITEM_ID_GUMDROPBUTTON;
	Gumdropbutton.Details.pluralName = "Gumdrop Buttons";
	Gumdropbutton.quantity = 3;
	CollectGumdrops.Completionitems.push_back(Gumdropbutton);

	SavetheGarden.ID = QUEST_ID_SavetheGarden;
	SavetheGarden.Name = "Save the Garden";
	SavetheGarden.Description = "While you are staying at the house can you bring me back 5 candy teeth. Those candy worms have been destroying my garden.\n"
		"You will receive 20 gold";
	SavetheGarden.rewardgold = 20;
	SavetheGarden.rewardxp = 20;

	Candyteeth.Details.Name = "Candy tooth";
	Candyteeth.Details.ID = ITEM_ID_CANDYTOOTH;
	Candyteeth.Details.pluralName = "Candy Teeth";
	Candyteeth.quantity = 5;
	SavetheGarden.Completionitems.push_back(Candyteeth);

	Quests.push_back(DefeatLicoriceHenchman);
	Quests.push_back(CollectGumdrops);
	Quests.push_back(SavetheGarden);
}


//need to change

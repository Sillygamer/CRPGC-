#include "World.h"

World::World()
{


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
	/*
	Monster rat = new Monster(MONSTER_ID_RAT, "Rat", 5, 3, 10, 3, 3);
	rat.LootTable.Add(new LootItem(ItemByID(ITEM_ID_RAT_TAIL), 75, false));
	rat.LootTable.Add(new LootItem(ItemByID(ITEM_ID_PIECE_OF_FUR), 75, true));

	Monster snake = new Monster(MONSTER_ID_SNAKE, "Snake", 5, 3, 10, 3, 3);
	snake.LootTable.Add(new LootItem(ItemByID(ITEM_ID_SNAKE_FANG), 75, false));
	snake.LootTable.Add(new LootItem(ItemByID(ITEM_ID_SNAKESKIN), 75, true));
	snake.LootTable.Add(new LootItem(ItemByID(ITEM_ID_CLUB), 75, true));

	Monster giantSpider = new Monster(MONSTER_ID_GIANT_SPIDER, "Giant spider", 20, 5, 40, 10, 10);
	giantSpider.LootTable.Add(new LootItem(ItemByID(ITEM_ID_SPIDER_FANG), 75, true));
	giantSpider.LootTable.Add(new LootItem(ItemByID(ITEM_ID_SPIDER_SILK), 25, false));

	Monsters.push_backd(rat);
	Monsters.push_back(snake);
	Monsters.push_back(giantSpider);
	*/
}

void World::PopulateItems()
{

	//Items.push_back(new Weapons(ITEM_ID_RUSTY_SWORD, "Rusty sword", "Rusty swords", 0, 5));
	//Items.push_back(new Item(ITEM_ID_RAT_TAIL, "Rat tail", "Rat tails"));
	//Items.push_back(new Item(ITEM_ID_PIECE_OF_FUR, "Piece of fur", "Pieces of fur"));
	//Items.push_back(new Item(ITEM_ID_SNAKE_FANG, "Snake fang", "Snake fangs"));
	//Items.push_back(new Item(ITEM_ID_SNAKESKIN, "Snakeskin", "Snakeskins"));
	//Items.push_back(new Weapons(ITEM_ID_CLUB, "Club", "Clubs", 3, 10));
	//Items.push_back(new HealingPotion(ITEM_ID_HEALING_POTION, "Healing potion", "Healing potions", 5));
	//Items.push_back(new Item(ITEM_ID_SPIDER_FANG, "Spider fang", "Spider fangs"));
	//Items.push_back(new Item(ITEM_ID_SPIDER_SILK, "Spider silk", "Spider silks"));
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



//need to change




//need to change

private static void PopulateQuests()
{
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
	Quests.Add(clearFarmersField);
}

public static Monster MonsterByID(int id)
public static Monster MonsterByID(int id)
{
	for (Monster monster : Monsters)
	{
		if (monster.ID == id)
		{
			return monster;
		}
	}

	return null;
}
public static Quest QuestByID(int id)
public static Quest QuestByID(int id)
{
	for (Quest quest in Quests)
	{
		if (quest.ID == id)
		{
			return quest;
		}
	}

	return null;
}


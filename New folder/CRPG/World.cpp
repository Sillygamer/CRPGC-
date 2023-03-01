#include "World.h"

World::World()
{
}

World::World(list<Location> locations)
{


	PopulateLocations();
}

World::~World()
{

}

void World::PopulateLocations()
{
	Location GingerbreadHouse;
	GingerbreadHouse.ID = LOCATION_ID_GINGERBREAD_HOUSE;
	GingerbreadHouse.name = "Gingerbread house";
	GingerbreadHouse.Description = 
		"The house you are allowed to stay in for the time being. "
		"It smells delicious its tempting to eat"
		" but then you wouldn't have a place to stay.";



	Location CandyCaneForest;
	CandyCaneForest.ID = LOCATION_ID_CANDYCANE_FOREST;
	CandyCaneForest.name = "The Candy Cane Forest";
	CandyCaneForest.Description = 
		"Tall Candycane Trees as far as the eye can see";
	

	Location CandyVillage;
	CandyVillage.ID = LOCATION_ID_CANDY_VILLAGE;
	CandyVillage.name = "Candy Village";
    CandyVillage.Description =
		"The bussling heart of candy land, although it's seen better days...";

	Location CandyCastle;
	CandyCastle.ID = LOCATION_ID_CANDY_CASTLE;
	CandyCastle.name = "Candy Castle";
	CandyCastle.Description = 
		"The castle where the great King Candy lives.. or used to.";

	Location CandyStore;
	CandyStore.ID = LOCATION_ID_CANDY_STORE;
	CandyStore.name = "Candy Store";
	CandyStore.Description =
		"The candy store where you can get all your candy needs";

	Location LicoriceForest;
	LicoriceForest.ID = LOCATION_ID_LICORICE_FOREST;
	LicoriceForest.name = "Licorice Forest";
	LicoriceForest.Description = 
		"A dark forest of licorice. It never seems to turn day here...";
	
	/*
	GingerbreadHouse.IDlocationnorth = LOCATION_ID_CANDYCANE_FOREST;

	CandyCaneForest.IDlocationnorth = LOCATION_ID_CANDY_VILLAGE;
	CandyCaneForest.IDlocationeast = LOCATION_ID_LICORICE_FOREST;
	CandyCaneForest.IDlocationwest = LOCATION_ID_CANDY_STORE;
	CandyCaneForest.IDlocationsouth = LOCATION_ID_GINGERBREAD_HOUSE;	
	*/

	locations.push_front(GingerbreadHouse);
	locations.push_front(CandyCaneForest);
	locations.push_front(CandyVillage);
	locations.push_front(CandyCastle);
	locations.push_front(CandyStore);
	locations.push_front(LicoriceForest);
}

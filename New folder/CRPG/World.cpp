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
	GingerbreadHouse.name = "Gingerbread house";
	GingerbreadHouse.Description = 
		"The house you are allowed to stay in for the time being. "
		"It smells delicious its tempting to eat"
		" but then you wouldn't have a place to stay.";

	CandyCaneForest.ID = LOCATION_ID_CANDYCANE_FOREST;
	CandyCaneForest.name = "The Candy Cane Forest";
	CandyCaneForest.Description = 
		"Tall Candycane Trees as far as the eye can see";
	
	GumdropVillage.ID = LOCATION_ID_GUMDROP_VILLAGE;
	GumdropVillage.name = "Gumdrop Village";
	GumdropVillage.Description =
		"The bussling heart of candy land, although it's seen better days...";

	CandyCastle.ID = LOCATION_ID_CANDY_CASTLE;
	CandyCastle.name = "Candy Castle";
	CandyCastle.Description = 
		"The castle where the great King Candy lives.. or used to.";


	CandyStore.ID = LOCATION_ID_CANDY_STORE;
	CandyStore.name = "Candy Store";
	CandyStore.Description =
		"The candy store where you can get all your candy needs";


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
	locations.push_back(GingerbreadHouse);
	locations.push_back(CandyStore);
	locations.push_back(CandyCastle);
	locations.push_back(GumdropVillage);
	locations.push_back(CandyCaneForest);
	locations.push_back(LicoriceForest);
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



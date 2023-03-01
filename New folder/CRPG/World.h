#pragma once
#include <iostream>
#include "Location.h"
#include <list>

using namespace std;

class World
{
private:

public:
	string WorldName = "Candyland";
	list<Location> locations;
	World();
	World(list<Location> locations);
	virtual ~World();
	void PopulateLocations();

	int LOCATION_ID_GINGERBREAD_HOUSE = 1;
	int LOCATION_ID_CANDYCANE_FOREST = 2;
	int LOCATION_ID_CANDY_VILLAGE = 3;
	int LOCATION_ID_CANDY_CASTLE = 4;
	int LOCATION_ID_CANDY_STORE = 5;
	int LOCATION_ID_LICORICE_FOREST = 6;
};

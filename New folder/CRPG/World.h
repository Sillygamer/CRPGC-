#pragma once
#include <iostream>
#include "Location.h"
#include <list>
#include <algorithm>
#include <vector>
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


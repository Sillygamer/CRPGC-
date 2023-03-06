#pragma once
#include<iostream>
#include "Location.h"

using namespace std;
class Player
{
private:


protected:



public:
	string Name;
	Location currentlocation;

	Player();
	virtual ~Player();
	void moveto(Location loc);
};


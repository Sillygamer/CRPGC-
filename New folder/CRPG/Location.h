#pragma once
#include<iostream>
#include"Location.h"
#include "Item.h"
#include "Quest.h"
#include "Monster.h"
using namespace std;
class Location
{
private:


public:
	int ID;
	string name;
	string Description;
	Item Requiredtoenter;
	Quest questhere;
	Monster monsterhere;
	int IDlocationnorth = NULL;
	int IDlocationsouth = NULL;
	int IDlocationwest = NULL;
	int IDlocationeast = NULL;
	Location();
	virtual ~Location();
};


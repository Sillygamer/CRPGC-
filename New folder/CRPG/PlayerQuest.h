#pragma once
#include<iostream>
#include "Item.h"
#include <vector>
#include "Quest.h"
using namespace std;
class PlayerQuest
{
private:

public:
	Quest Details;
	bool isCompleted;

	PlayerQuest();
	virtual ~PlayerQuest();
};


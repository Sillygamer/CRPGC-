#pragma once
#include<iostream>
#include "Item.h"
#include <vector>
#include "QuestCompletionItem.h"
using namespace std;
class Quest
{
private:

public:
	int ID;
	string Name;
	string Description;
	int rewardxp;
	int rewardgold;
	Item RewardItem;
	vector<QuestCompletionItem> Completionitems;

	Quest();
	virtual ~Quest();
};


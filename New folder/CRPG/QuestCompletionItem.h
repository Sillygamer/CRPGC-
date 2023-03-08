#pragma once
#include<iostream>
#include "Item.h"
using namespace std;
class QuestCompletionItem
{
private:

public:
	Item Details;
	int quantity;

	QuestCompletionItem();
	virtual ~QuestCompletionItem();
};


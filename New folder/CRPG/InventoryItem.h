#pragma once
#include<iostream>
#include "Item.h"
using namespace std;
class InventoryItem
{
private:

public:
	Item details;
	int quantity;

	InventoryItem();
	virtual ~InventoryItem();
};


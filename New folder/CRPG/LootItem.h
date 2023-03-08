#pragma once
#include<iostream>
#include "Item.h"
using namespace std;
class LootItem
{
private:

public:
    Item Details;
    int DropPercentage;
    bool IsDefaultItem;

    LootItem();
    virtual ~LootItem();
};


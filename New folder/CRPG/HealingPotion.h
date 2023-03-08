#pragma once
#include "Item.h"
class HealingPotion :
    public Item
{
private:

public:
    int heal;


    HealingPotion();
    virtual ~HealingPotion();
};


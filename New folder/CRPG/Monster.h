#pragma once
#include "Creature.h"
#include <iostream>
#include "LootItem.h"
#include <vector>
using namespace std;
class Monster :
    public Creature
{
private:

public:
    int ID;
    string Name;
    int maxdamage;
    int rewardxp;
    int rewardgold;
    vector<LootItem> loottable;

    Monster();
    virtual ~Monster();
};


#pragma once
#include "Item.h"
#include<iostream>
using namespace std;
class Weapons :
    public Item
{
private:

public:
    int maxdamage;
    int mindamage;


    Weapons();
    virtual ~Weapons();
};


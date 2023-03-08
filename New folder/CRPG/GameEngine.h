#pragma once
#include<iostream>
#include "World.h"

using namespace std;
class GameEngine
{
private:

public:
	World world;
	 string version = "0.0.2";
	 void Initialize();
	GameEngine();
	virtual ~GameEngine();
};


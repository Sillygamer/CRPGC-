#pragma once
#include<vector>
#include<iostream>
#include<fstream>
#include "State.h"
#include "Player.h"
#include <stack>

class GameState :
    public State
{
private:
    Player *& player;
    std::stack<State*> *states;

public:
    GameState( Player*& player, std::stack<State*> *states);
    virtual ~GameState();
    virtual void update();

};


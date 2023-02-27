#pragma once
#include "State.h"
#include "Player.h"
#include <stack>
#include<iomanip>
#include <iostream>
class CharacterCreatorState :
    public State
{
private:
    Player*& player;
    std::stack<State*>* states;

public:
    CharacterCreatorState(Player*& player, std::stack<State*>* states);
    virtual ~CharacterCreatorState();

    void update();
    void createCharacter();
    void printmenu();
    void updatemenu();
    std::string choice;
};


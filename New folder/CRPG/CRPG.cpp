#include <iostream>
#include "GameEngine.h"
#include "Player.h"
#include "Location.h"
#include "World.h"

int main()
{
    Player player;
    World world;
    player.Name = "annie";
    GameEngine gameengine;
    gameengine.Initialize();
   
    Location tmploc = world.Locationbyid(1);
    cout << tmploc.name << "\n";
}
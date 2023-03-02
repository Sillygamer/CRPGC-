#include <iostream>
#include "GameEngine.h"
#include "Player.h"
#include "Location.h"
#include "World.h"
#include <string>
int main()
{
    Player player;
    World world;
   // player.Name = "annie";
    GameEngine gameengine;
    gameengine.Initialize();
   
    Location tmploc = world.Locationbyid(1);
   // cout << tmploc.name << "\n";

    while (true)
    {
        string choice;
        cout << "> ";
        cin >> choice;
        std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
        if (choice == "quit"|| choice == "exit" || choice == "q")
        {
            break;
        }
        else
        {
            cout << "not a valid input. if you need help type 'help'\n";
        }
    }
}
#include <iostream>
#include "GameEngine.h"
#include "Player.h"
#include "Location.h"
#include "World.h"
#include <string>

static void Parseinput(string input)
{
    if (input == "help"||input == "h")
    {
        cout << "help is coming stay tuned and stay alive!!!\n";
    }
    else if (input == "look"|| input == "l")
    {

    }
    else
    {
        cout << "not a valid input! if you need help type 'help'.\n";
    }
    
}
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
        Parseinput(choice);
    }


}

#include <iostream>
#include "GameEngine.h"
#include "Player.h"
#include "Location.h"
#include "World.h"
#include <string>

static void displaycurrentlocation(Player player)
{

    cout << "\nYou are at " << player.currentlocation.name << "\n"<< player.currentlocation.Description;
}
static void Parseinput(string input, Player player, World world)
{
    if (input == "help"||input == "h")
    {
        cout << " Move 'north' with 'n'.\n Move 'south' with 's'.\n"
             " Move 'west' with 'w'.\n Move 'east' with 'e'.\n"
            " 'look' using 'l'\n 'quit' or 'q' to 'exit'.\n 'help' or 'h' to pull this menu up again.\n"<<" More help is coming stay tuned and stay alive!!!\n";
    }
    else if (input == "look"|| input == "l")
    {
        displaycurrentlocation(player);
    }
    else if (input == "n" || input == "north")
    {

    }
    else if (input == "s" || input == "south")
    {

    }
    else if (input == "w" || input == "west")
    {

    }
    else if (input == "e" || input == "east")
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
    player.moveto(world.Locationbyid(1));
    cout << tmploc.name << "\n";

    while (true)
    {
        string choice;
        cout << "> ";
        //cin >> choice;
        getline(cin, choice);
        std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
        if (choice == "quit"|| choice == "exit" || choice == "q")
        {
            break;
        }
        else if (choice == "n" || choice == "north")
        {
            if (player.currentlocation.IDlocationnorth != NULL)
            {


                if (player.currentlocation.ID == 1) 
                {
                    player.moveto(world.Locationbyid(2));
                }//loc1
                else if (player.currentlocation.ID == 2)
                {
                    player.moveto(world.GumdropVillage);
                }//loc2
                else if (player.currentlocation.ID == 3) 
                {
                    player.moveto(world.CandyCastle);
                }//loc3
                displaycurrentlocation(player);
            }//nullend

            else
            {
                cout << "You can't move north.\n";
            }//else
        }//northend
        else if (choice == "s" || choice == "south")
        {
            if (player.currentlocation.IDlocationsouth != NULL)
            {
                if (player.currentlocation.ID == 2) 
                {
                    player.moveto(world.Locationbyid(1));
                }//loc 2
                else if (player.currentlocation.ID == 3) 
                {
                        player.moveto(world.CandyCaneForest);
                }//loc 3
                else if (player.currentlocation.ID == 4) 
                {
                        player.moveto(world.GumdropVillage);
                }//loc4
                displaycurrentlocation(player);
            }//nullend
            else
            {
                cout << "You can't move south!\n";
            }//elseend
        }//southend
        else if (choice == "w" || choice == "west")
        {
            if (player.currentlocation.IDlocationwest != NULL)
            {
                if (player.currentlocation.IDlocationwest == 6) 
                {
                    player.moveto(world.GumdropVillage);
                }//loc6
                else if (player.currentlocation.IDlocationwest == 3) 
                {
                        player.moveto(world.CandyStore);
                }//loc3
                displaycurrentlocation(player);
            }//nullend
            else
            {
                cout << "You can't move west!\n";
            }//elseend
        }//westend
        else if (choice == "e" || choice == "east")
        {
            if (player.currentlocation.IDlocationeast != NULL)
            {

                if (player.currentlocation.IDlocationeast == 5) 
                {
                    player.moveto(world.GumdropVillage);
                }//loc5
                else if (player.currentlocation.IDlocationeast == 3)
                {
                        player.moveto(world.LicoriceForest);
                }//loc3
                displaycurrentlocation(player);
            }//nullend
            else
            {
                cout << "You can't move east!\n";
            }//elseend
        }//eastend

        Parseinput(choice, player,world);
    }


}

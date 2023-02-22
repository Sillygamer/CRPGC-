

#include "Game.h"
#include "Player.h"

void startmenu()
{
	std::string name;
	std::cout << "--- Starting Game ---" << "\n";
	std::cout << "What is your name traveler? \n";
	std::cin >> name;
	Game game;
	Player player;
	game.playername = name;
	player.name = name;
	std::cout << "Hello " << player.name << "\n";
    std::cout << "\nIf you need help type 'help' \n\n";
}	

int main()
{
	Game game;
	startmenu();
	game.update();


	//game loop

	
}
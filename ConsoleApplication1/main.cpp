

#include "Game.h"
#include "Player.h"

void startmenu()
{
	std::string name;
	std::cout << "--- Starting Game ---" << "\n";
	std::cout << "What is your name traveler? \n";
	std::cin >> name;
	Game game;
	game.playername = name;
	std::cout << "Hello " << game.playername << "\n";
    std::cout << "\nIf you need help type 'help' \n\n";
}	

int main()
{
	Game game;
	Player player;
	game.update();
	startmenu();
	bool quit = false;
	std::string choice;
	//game loop
	while (!quit)
	{
		std::cout << "--- Main Menu ---" << "\n";
		std::cout << "Input here: ";
		std::cin >> choice;

		if (choice == "quit" || choice == "q")
		{
			std::cout << "\nGoodbye \n";
			quit = true;

		}
		else if (choice == "player stats" || choice == "p" || choice == "stats")
		{
			std::cout << "-----Caracter stats-----" << "\n";
			std::cout << player.toString();
		}
		else
		{
			std::cout << "\nI could not find what you are looking for\n";
			std::cout << "Remember to use lower case\n";
		}
	}
	return 0;
}


#include "Game.h"

void startmenu()
{
	std::cout << "--- Main Menu ---" << "\n";
	std::cout << "\nIf you need help type 'help' \n\n";
}
int main()
{
	Game game;
	game.update();
	startmenu();
	bool quit = false;
	std::string choice;
	//game loop
	while (!quit)
	{
		std::cout << "Input here: ";
		std::cin >> choice;

		if (choice == "quit" || choice == "q")
		{
			std::cout << "\nGoodbye \n";
			quit = true;

		}
		else
		{
			std::cout << "\nI could not find what you are looking for\n";
			std::cout << "Remember to use lower case\n";
		}
	}
	return 0;
}
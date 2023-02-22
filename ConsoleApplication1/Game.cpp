#include "Game.h"
Game::Game()
{
	this->player = new Player(playername);
}

Game::~Game()
{
	delete this->player;
}

void Game::update() 
{
	std::string Name;
	Name = playername;
	bool quit = false;
	std::string choice;
	while (!quit)
	{
		std::cout << "\n--- Main Menu ---" << "\n";

		std::cout << this->player->getMenuBar() << "\n";
		std::cout << "------------------------------------------------------" << "\n";
		std::cout << "Input here: ";
		std::cin >> choice;

		if (choice == "quit" || choice == "q" )
		{
			std::cout << "\nGoodbye \n";
			quit = true;

		}
		else if (choice == "player stats" || choice == "p" || choice == "stats" )
		{
			std::cout << "-----Caracter stats-----" << "\n";
			std::cout << player->toString();
		}
		else
		{
			std::cout << "\nI could not find what you are looking for\n";
			std::cout << "Remember to use lower case\n";
		}
	}
}
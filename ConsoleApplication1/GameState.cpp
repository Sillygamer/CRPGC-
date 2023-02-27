#include "GameState.h"


GameState::GameState( Player*& player, std::stack<State*> *states) : player(player)
{
	this->states = states;
}

GameState::~GameState()
{
}

void GameState::update()
{

	bool quit = false;
	std::string choice;
	while (!quit)
	{
		system("CLS");
		std::cout << "\n--- Main Menu ---" << "\n";

		std::cout << this->player->getMenuBar() << "\n";
		std::cout << "------------------------------------------------------" << "\n";
		std::cout << "Input here: ";
		std::cin >> choice;

		if (choice == "quit" || choice == "q")
		{
			system("CLS");
			std::cout << "\nGoodbye \n";
			quit = true;

		}
		else if (choice == "player stats" || choice == "p" || choice == "stats")
		{
			std::cout << "-----Caracter stats-----" << "\n";
			std::cout << player->toString();
			system("PAUSE");
		}
		else
		{
			system("CLS");
			std::cout << "\nI could not find what you are looking for\n";
			std::cout << "Remember to use lower case\n";
			system("PAUSE");
		}
	}

}

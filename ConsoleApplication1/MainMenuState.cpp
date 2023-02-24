#include "MainMenuState.h"
#include "Player.h"

MainMenuState::MainMenuState(Player* player, std::stack<State*>* states)
{
	this->player = player;
	this->states = states;
}


MainMenuState::~MainMenuState()
{

}

void MainMenuState::update()
{
	this->printmenu();
	this->updatemenu();
}

void MainMenuState::printmenu()
{

	std::cout << "------Main Menu-----" << "\n\n"
		<< "type what you would like to do" << "\n"
		<< "if you need help type help" <<"\n\n";
	std::cout << "Input here: ";
	std::cin >> choice;
}

void MainMenuState::updatemenu()
{
	if (choice == "quit" || choice == "q")
	{
		std::cout << "\nGoodbye \n";
		 this->setQuit(true);

	}
	else if (choice == "start" || choice == "play" || choice == "p")
	{
		this->states->push(new GameState(this->player, this->states));
	}
	else
	{
		std::cout << "\nI could not find what you are looking for\n";
		std::cout << "Remember to use lower case\n";
	}
}

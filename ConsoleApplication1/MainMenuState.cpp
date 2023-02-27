#include "MainMenuState.h"
#include "Player.h"

MainMenuState::MainMenuState(std::vector<Player*>* playerlist,unsigned& activecharacter, std::stack<State*>* states):activecharacter(activecharacter)
{
	this->playerlist = playerlist;
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
	system("CLS");
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
		system("CLS");
		std::cout << "\nGoodbye \n";
		 this->setQuit(true);
	}
	else if (choice == "start" || choice == "play" || choice == "p")
	{
		system("CLS");
		if(this->playerlist->empty()){
			this->states->push(new GameState(this->playerlist->at(this->activecharacter), this->states));
		}
		else { std::cout << "Create a character first\n"; }
		system("Pause");
	}
	else if (choice == "create character" || choice == "create player" || choice == "c")
	{
		system("CLS");
		this->states->push(new CharacterCreatorState(this->playerlist, this->activecharacter, this->states));
		system("PAUSE");
	}
	else if (choice == "select character" || choice == "select player" || choice == "s")
	{
		system("CLS");
		this->states->push(new CharacterCreatorState(this->player, this->states));
		system("PAUSE");
	}
	else
	{
		std::cout << "\nI could not find what you are looking for\n";
		std::cout << "Remember to use lower case\n";
		system("Pause");
	}
}

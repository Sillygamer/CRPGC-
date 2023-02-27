#include "CharacterCreatorState.h"

CharacterCreatorState::CharacterCreatorState(Player*& player, std::stack<State*>* states) : player(player)
{

	this->states = states;
}

CharacterCreatorState::~CharacterCreatorState()
{

}

void CharacterCreatorState::createCharacter()
{
	std::string name = "";
	std::string bio = "";
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Hello " << name<<"\n";
	std::cout << "Biography: ";
	std::cin >> bio;
	delete this->player;
	this->player = new Player(name, name, bio);
	std::cout << "Character " << name << "created\n\n";
}

void CharacterCreatorState::update()
{
	this->printmenu();
	this->updatemenu();
}

void CharacterCreatorState::printmenu()
{
	system("CLS");
	std::cout << "------Character Menu-----" << "\n\n"
		<< "type what you would like to do" << "\n"
		<< "if you need help type help" << "\n\n";
	std::cout << "Input here: ";
	std::cin >> choice;
}

void CharacterCreatorState::updatemenu()
{
	if (choice == "quit" || choice == "q")
	{
		system("CLS");
		std::cout << "\nGoodbye \n";
		this->setQuit(true);
	}
	else if (choice == "create character" || choice == "create player" || choice == "c")
	{
		system("CLS");
		this->createCharacter();
		system("PAUSE");
	}
	else
	{
		std::cout << "\nI could not find what you are looking for\n";
		std::cout << "Remember to use lower case\n";
		system("PAUSE");
	}
}


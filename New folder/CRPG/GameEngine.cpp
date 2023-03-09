#include "GameEngine.h"

void GameEngine::Initialize()
{
	cout << "\n Initializing Game Version " << version <<"\n\n";
	cout << " Welcome to " << world.WorldName << "!\n\n";
	world.ListLocations();
	world.ListMonsters();
	world.ListItems();
	//system("PAUSE");
}
// remember stack to push and pop menus
GameEngine::GameEngine()
{

}

GameEngine::~GameEngine()
{
}

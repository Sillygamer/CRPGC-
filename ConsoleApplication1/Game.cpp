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

}
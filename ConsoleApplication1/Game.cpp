#include "Game.h"
Game::Game()
{
	quit = false;

	this->player = new Player(playername);

	this->states.push(new GameState(this->player, &this->states));
}

Game::~Game()
{
	delete this->player;

	while (!this->states.empty())
	{
		delete this->states.top();
		this->states.pop();
	}
}

void Game::update() 
{
	this->states.top()->update();
	if (this->states.top()->getQuit())
	{
		delete this->states.top();
		this->states.pop();
	}

	if (this->states.empty())
		this->quit = true;
}
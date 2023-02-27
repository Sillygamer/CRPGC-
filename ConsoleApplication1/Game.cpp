#include "Game.h"
#include"Player.h"
#include "MainMenuState.h"
Game::Game(unsigned activecharacter)
{
	quit = false;
	this->activecharacter = 0;

	this->states.push(new MainMenuState(&this->playerlist,this->activecharacter, &this->states));
}

Game::~Game()
{
	for (size_t i = 0; i < this->playerlist.size(); i++)
	{
		delete this->playerlist[i];
	}
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
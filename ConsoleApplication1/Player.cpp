#include "Player.h"

Player::Player(std::string name)
{
	this->name = name;
	this->level = 1;
	this->exp = 0;
	this->expnext = 100;
	this->hp = 10;
	this->hpmax = 10;

	this->strength = 1;
	this->vitality = 1;
	this->agility = 1;
	this->dexterity = 1;
	this->intellegence = 1;

	this->stamina = 10;
	this->staminamax = 10;
	this->defence = 1;
	this->hitchance = 1.f;
	this->dodgechance = 1.f;
	this->critchance = 1.f;
	this->mana = 10;
	this->manamax = 10;
	this->magicfind = 1.f;


}

Player::Player()
{
}

Player::~Player()
{
}

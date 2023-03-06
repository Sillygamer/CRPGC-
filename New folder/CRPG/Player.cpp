#include "Player.h"

Player::Player()
{
	this->Name = Name;
	this->currentlocation = currentlocation;
}

Player::~Player()
{

}

void Player::moveto(Location loc)
{
	currentlocation = loc;
}

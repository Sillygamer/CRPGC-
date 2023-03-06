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

void Player::movetnorth()
{
	if(currentlocation.IDlocationnorth != NULL)
	{
		moveto(world.Locationbyid(currentlocation.IDlocationnorth));
	}
	else
	{
		cout << "You can't move north.\n";
	}
}

void Player::movesouth()
{
	if (currentlocation.IDlocationsouth != NULL)
	{
		moveto(world.Locationbyid(currentlocation.IDlocationsouth));
		
	}
	else
	{
		cout << "You can't move south.\n";
	}
}

void Player::movewest()
{
	if (currentlocation.IDlocationwest != NULL)
	{
		moveto(world.Locationbyid(currentlocation.IDlocationwest));
	}
	else
	{
		cout << "You can't move west!\n";
	}
}

void Player::moveeast()
{
	if (currentlocation.IDlocationeast != NULL)
	{
		moveto(world.Locationbyid(currentlocation.IDlocationeast));
	}
	else
	{
		cout << "You can't move east!\n";
	}
}

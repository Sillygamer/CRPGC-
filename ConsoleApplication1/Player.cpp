#include "Player.h"

void Player::updateStats()
{

	this->hpmax = 5 * this->level;

	this->hp = this->hpmax;

}

Player::Player(std::string name, std::string& Playername, std::string bio)
{
	this->name = Playername;
	this->bio = bio;
	this->level = 1;
	this->exp = 0;
	this->expnext = 55;
	this->gold = 0;
	this->Playername = Playername;
	this->updateStats();
}
const std::string Player::toString()
	{
		std::stringstream ss;
		ss << "Name: " << Playername << "\n\n"
		   << "Bio: " << this->bio << "\n\n"
		   << "Level: " << this->level << "\n"
		   << "Exp: " << this->exp << " / " << this->expnext << "\n"
		   << "Health: " << this->hp << " / " << this->hpmax << "\n"
		   << "Gold: " << this->gold
		   << "\n";
		return ss.str();
	}
Player::Player()
{

}

const std::string Player::getMenuBar()
{
	std::stringstream ss;
	ss  << "Name: " << this->name << " | "
		<< "Level: " << this->level << " | "
		<< "Exp: " << this->exp << " / " << this->expnext << " | "
		<< "Hp: " << this->hp << " / " << this->hpmax;
	return ss.str();
}

bool Player::updatelevel()
{
	if (this->exp >= this->expnext)
	{
		this->level++;
		this->exp -= this->expnext;
		this->expnext = (50 / 3) * (pow(this->level, 3) - 6 * pow(this->level, 2) + (this->level * 17) - 12);
		this->updateStats();
		return true;
	}
	return false;
}

Player::~Player()
{
}
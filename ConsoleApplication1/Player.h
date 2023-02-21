#pragma once

#include<string>
#include<iostream>
#include<vector>
#include<sstream>
class Player
{
private:
	std::string name;
	int hp;
	int hpmax;
	int level;
	int exp;
	int expnext;

	int strength;
	int vitality;
	int agility;
	int dexterity;
	int intellegence;

	int stamina;
	int staminamax;
	int defence;
	float dodgechance;
	float hitchance;
	float critchance;
	int mana;
	int manamax;
	float magicfind;
	int gold;

public:
	Player(std::string name);
	Player();
	virtual ~Player();
	const std::string toString()
	{
		std::stringstream ss;
		ss << "name: " << this->name << "\n"
		   << " level: " << this->level << "\n"
		   << " exp: " << this->exp << " / " << this->expnext << "\n\n"

		   << "health: " << this->hp << " / " << this->hpmax << "\n"
		   << "Stamina: " << this->stamina << " / " << this->staminamax
		   << "mana: " << this->mana << " / " << this->manamax << "\n\n"

		   << "Strength: " << this->strength
		   << "vitality: " << this->vitality
		   << "agility: " << this->agility
		   << "dexterity: " << this->dexterity
		   << "intellegence: " << this->intellegence << "\n"

		   << "defence: " << this->defence
		   << "hitchance: " << this->hitchance
		   << "dodgechance: " << this->dodgechance
		   << "critchance: " << this->critchance
		   << "Magic finding: " << this->magicfind << "\n"

		   << "gold: " << this->gold
		   << "\n";
		return ss.str();
	}
};


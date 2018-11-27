#ifndef PLAYER_H
#define PLAYER_H
#include "Undead_type.h"
#include "Specs.h"
#include "Character.h"
#include "Item.h"
#include "Weapon.h"
#include "Enemy.h"


#include <vector>
using namespace std;

class Player : public Character {

private:
	vector<Item*> equip;
	Weapon weap;
	int ExpRest;
	int potionMax;
	Specs tab;
	vector<Undead_type*> undead_vect;

public:
	int MaxMana();
	void UpExperience();
	void IncreaseMana();
	void IncreaseHP();
	int GetNecromancy();

	Player();

	int GetPotionMax();
	int attack(Enemy &target);
};

#endif

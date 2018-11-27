#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"


class Enemy : public Character {

private:
	int Experience;
public:
	Enemy(string name, char tile, int level, int attack, int defense, int health, int xp);
	void AI_move();
	int getExperience();
	void setExperience(int _experience);
	int attack();
};

#endif

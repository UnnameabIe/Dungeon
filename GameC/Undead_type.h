#ifndef UNDEAD_TYPE_H
#define UNDEAD_TYPE_H
#include "Enemy.h"
#include "Struct.h"
#include "Character.h"

class Undead_type : public Character {

private:
	point Aim;
public:
	void SearchAim();
	void AI_move();
	void SetAim(point aim);
	int attack(Enemy &target);
};

#endif

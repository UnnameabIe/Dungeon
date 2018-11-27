#ifndef WEAPON_H
#define WEAPON_H
#include "Item.h"


class Weapon : public Item {

private:
	int Effect;
	int Coefficient;

public:
	void MakeEffect();
	void SetCoef(int c);
	int GetCoef();
};

#endif

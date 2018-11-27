#ifndef ARMORTAB_H
#define ARMORTAB_H
#include "Armor.h"

class ArmorTab {

private:
	Armor* Head;
	Armor* Body;
	Armor* Legs;

public:
	void setArmor(Armor a);
	bool check();
};

#endif

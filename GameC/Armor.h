#ifndef ARMOR_H
#define ARMOR_H
#include "Item.h"


class Armor : public Item {

private:
	int Effect;
	int Type;

public:
	virtual void MakeEffect();
	void SetType(int _type);
	int GetType();
};

#endif

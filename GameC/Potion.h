#ifndef POTION_H
#define POTION_H
#include "Item.h"



class Potion : public Item {

private:
	int Effect;
	int Type;

public:
	void MakeEffect();
	void SetType(int _type);
	int GetType();
};

#endif

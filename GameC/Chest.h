#ifndef CHEST_H
#define CHEST_H
#include "Item.h"

class Chest {

private:
	int Amount;
	Item* Ptr;

public:
	Item* GetItem(int n);
	Item* GetList();
	void AddItem(Item* p);
};

#endif

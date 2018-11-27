#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <iostream>
#include "Struct.h"
using namespace std;

class Item {

protected:
	point Pnt;
	string Name;
	int Effect;

public:
	point getPnt();

	void setPnt(point _Pnt);
	void setEffect(int _Effect);
	void setName(string _Name);
	
	string getName();

	virtual void MakeEffect() = 0;
};

#endif

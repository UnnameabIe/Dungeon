#ifndef TILE_H
#define TILE_H
#include "Item.h"

class Tile {

private:
	point Dot;
	int Enum;
	Item* Ptr;

public:
	point getDot();
	void setDot(point _dot);
	char getMark();
	void setMark(char _mark);
};

#endif

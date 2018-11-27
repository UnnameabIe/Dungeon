#ifndef LEVEL_H
#define LEVEL_H
#include "Tile.h"
//#include <cstream>
#include <iostream>
#include <fstream>


class Level {

private:
	Tile** Matrix;

public:
	void load(ifstream F);
	void Print();
	Tile GetTile(point pnt);
	void ChangeTile(char c, point pnt);
	Level();
};

#endif

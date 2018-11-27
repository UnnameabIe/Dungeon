#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include "Struct.h"
#include <string>
using namespace std;


class Character {

protected:
	string name;
	point pnt;
	bool alive;
	int hp;
	int strength;
	int stamina;
	int dexterity;

public:
	point getPnt();
	void setPnt(point pnt);
	
	void setName(string name);
	string getName();
	
	int getStr();
	void setStr(int str);
	
	int getDex();
	void setDex(int dex);
	
	int getSta();
	void setSta(int sta);
	
	int getHP();
	int getHPmax();
	
	bool getAlive();
	void setAlive(bool al);
	
	int getLevel();
	
};

#endif

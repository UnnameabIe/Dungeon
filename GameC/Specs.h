#ifndef SPECS_H
#define SPECS_H

class Specs {

private:
	int Mana;
	int Experience;
	int hp;
	int strength;
	int stamina;
	int dexterity;

public:
	Specs();
	int getMana();
	void operation();
	void setMana(int _mana);

	int getExperience();
	void setExperience(int _experience);
};

#endif

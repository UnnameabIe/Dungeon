#include "Character.h"
#include "pch.h"

point Character::getPnt() {
	return this->pnt;
}

void Character::setPnt(point pnt) {
	this->pnt = pnt;
}

void Character::setName(string name) {
	this->name = name;
}

string Character::getName() {
	return this->name;
}

int Character::getStr() {
	// TODO - implement Character::getStr
	throw "Not yet implemented";
}

void Character::setStr(int str) {
	// TODO - implement Character::setStr
	throw "Not yet implemented";
}

int Character::getDex() {
	// TODO - implement Character::getDex
	throw "Not yet implemented";
}

void Character::setDex(int dex) {
	// TODO - implement Character::setDex
	throw "Not yet implemented";
}

int Character::getSta() {
	// TODO - implement Character::getSta
	throw "Not yet implemented";
}

void Character::setSta(int sta) {
	// TODO - implement Character::setSta
	throw "Not yet implemented";
}

int Character::getHP() {
	// TODO - implement Character::getHP
	throw "Not yet implemented";
}

int Character::getHPmax() {
	// TODO - implement Character::getHPmax
	throw "Not yet implemented";
}

bool Character::getAlive() {
	return this->alive;
}

void Character::setAlive(bool al) {
	this->alive = al;
}

int Character::getLevel() {
	// TODO - implement Character::getLevel
	throw "Not yet implemented";
}


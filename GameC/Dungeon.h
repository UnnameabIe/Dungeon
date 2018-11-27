#ifndef DUNGEON_H
#define DUNGEON_H
#include "Player.h"
#include "Undead_type.h"
#include "Enemy.h"
#include "Level.h"
#include "Chest.h"
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Dungeon {

private:
	Player _player;
	Level _level;
	vector<string> _levelData;
	vector<Undead_type> undeadvec;
	vector<Enemy> enemyvec;
	int LevelNum;
	vector<Chest> chestvec;

public:
	void OpenFile(string levelfile);
	void Play();
	void MovePlayer();
	void Save();
	void ProcessUndead(Undead_type _undead);
	void BattleEnemy(Player _player, Enemy _enemy);
	void ProcessPlayer(Player _player);
};

#endif

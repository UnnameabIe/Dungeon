#include "Dungeon.h"
#include "pch.h"

void Dungeon::OpenFile(string levelfile) {
	ifstream file;
	
	file.open(levelfile);
	if(file.fail()) {
		perror(levelfile.c_str());
		exit(1);
	}
	string line;
	
	while(getline(file, line)) {
		_levelData.push_back(line);
	}
	
	file.close();
}

void Dungeon::Play() {
	// TODO - implement Dungeon::Play
	throw "Not yet implemented";
}

void Dungeon::MovePlayer() {
	// TODO - implement Dungeon::MovePlayer
	throw "Not yet implemented";
}

void Dungeon::Save() {
	// TODO - implement Dungeon::Save
	throw "Not yet implemented";
}

void Dungeon::ProcessUndead(Undead_type _undead) {
	// TODO - implement Dungeon::ProcessUndead
	throw "Not yet implemented";
}

void Dungeon::BattleEnemy(Player _player, Enemy _enemy) {
	// TODO - implement Dungeon::BattleEnemy
	throw "Not yet implemented";
}

void Dungeon::ProcessPlayer(Player _player) {
	// TODO - implement Dungeon::ProcessPlayer
	throw "Not yet implemented";
}

#pragma once
#include "Definitions.h"

class Game
{
public:
	bool mRun;
	PlayerList playerList;
	PhaseList phaseList;
	PlayerList::iterator playerIterator;
	PhaseList::iterator phaseIterator;
	void AddPlayer(string characterName);
	void SetPhases();
	void StartGame();
	void Run();
};

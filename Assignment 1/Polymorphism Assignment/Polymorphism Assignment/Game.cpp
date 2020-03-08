#include "Game.h"
#include "Utilities.h"
#include "Phases.h"
#include "Players.h"

void Game::AddPlayer(string characterName)
{
	shared_ptr<IPlayer> newPlayer;
	if (characterName == "sorceress")
	{
		newPlayer = NewPlayer(SORCERESS);
	}
	else if (characterName == "wizard")
	{
		newPlayer = NewPlayer(WIZARD);
	}
	newPlayer->CreateDeck();
	playerList.push_back(newPlayer);
}

void Game::SetPhases()
{
	phaseList.push_back(shared_ptr<IPhase>(new DrawPhase()));
	phaseList.push_back(shared_ptr<IPhase>(new PlacePhase()));
	phaseList.push_back(shared_ptr<IPhase>(new AttackPhase()));
}

void Game::StartGame()
{
	playerIterator = playerList.begin();
	phaseIterator = phaseList.begin();
	playerList[0]->mOpponent = playerList[1];
	playerList[1]->mOpponent = playerList[0];
	mRun = true;
}

void Game::Run()
{
	cout << "New round" << endl;
	for (auto& player : playerList) {
		cout << "New player turn" << endl;
		for (auto& phase : phaseList) {
			cout << "New phase" << endl;
			phase->Run(player);
		}
	}
	cout << "Round ended" << endl;
	string ignore;
	cin >> ignore;
}

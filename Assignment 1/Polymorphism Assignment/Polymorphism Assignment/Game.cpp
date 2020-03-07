#include "Game.h"
#include "Utilities.h"
#include "Players.h"
#include "Phases.h"

void Game::AddPlayer(string characterName)
{
	shared_ptr<Player> newPlayer;
	if (characterName == "sorceress")
	{
		newPlayer = shared_ptr<Player>(new Sorceress());
	}
	else if (characterName == "wizard")
	{
		newPlayer = shared_ptr<Player>(new Wizard());
	}
	newPlayer->CreateDeck();
	playerList.push_back(newPlayer);
}

void Game::SetPhases()
{
	phaseList.emplace_back(new shared_ptr<DrawPhase>());
	phaseList.emplace_back(new shared_ptr<PlacePhase>());
	phaseList.emplace_back(new shared_ptr<AttackPhase>());
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
	for (auto& player : playerList) {
		for (auto& phase : phaseList) {
			phase->Run(player);
		}
	}
}

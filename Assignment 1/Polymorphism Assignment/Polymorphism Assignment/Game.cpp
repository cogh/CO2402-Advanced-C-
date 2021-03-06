#include "Game.h"
#include "Utilities.h"
#include "Phases.h"
#include "Players.h"
#include "Cards.h"

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
	newPlayer->CreateDeck(newPlayer);
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
	roundNumber = 1;
	playerIterator = playerList.begin();
	phaseIterator = phaseList.begin();
	playerList[0]->mOpponent = playerList[1];
	playerList[1]->mOpponent = playerList[0];
	playerList[0]->Draw();
	playerList[1]->Draw();
	cout << playerList[0]->mName << " starts with " << playerList[0]->mHand.GetRandom()->mName << endl;
	cout << playerList[1]->mName << " starts with " << playerList[1]->mHand.GetRandom()->mName << endl;
	mRun = true;
}

void Game::Run()
{
	cout << "Round " << roundNumber << endl;
	roundNumber++;
	for (auto& player : playerList) {
		cout << player->mName << "'s turn" << endl;
		for (auto& phase : phaseList) {
			//cout << "New phase" << endl;
			phase->Run(player);
		}
	}
	cout << "Round ended" << endl;
	//string ignore;
	//cin >> ignore;
}

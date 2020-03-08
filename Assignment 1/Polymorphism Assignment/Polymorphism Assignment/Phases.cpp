#include "Phases.h"
#include "Players.h"
#include "Cards.h"

void DrawPhase::Run(shared_ptr<IPlayer> player)
{
	cout << player->mName << " draws ";
	if (player->mDeck.Size() <= 0)
	{
		cout << "Deck has been exhausted!" << endl;
		string ignore;
		cin >> ignore;
	}
	else
	{
		player->Draw();
	}
}

void PlacePhase::Run(shared_ptr<IPlayer> player)
{
	// Place card
	cout << player->mName;
	player->Place();
	// Display cards on table
	cout << "Cards on table: ";
	for (auto& card : player->mField.GetAll())
	{
		cout << card->mName << "(hp:" << card->GetHealth() << ", atk:" << card->GetAttack() << "), ";
	}
	for (auto& card : player->mOpponent->mField.GetAll())
	{
		cout << card->mName << "(hp:" << card->GetHealth() << ", atk:" << card->GetAttack() << "), ";
	}
	cout << endl;
}

void AttackPhase::Run(shared_ptr<IPlayer> player)
{
	// Activate random card
	if (player->mField.Size() > 0)
	{
		shared_ptr<ICard> card = player->mField.GetRandom();
		card->ActivateEffect(card);
	}
	else
	{
		cout << "No cards on field to attack with" << endl;
	}
	cout << endl;
}
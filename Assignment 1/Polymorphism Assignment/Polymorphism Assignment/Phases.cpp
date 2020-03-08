#include "Phases.h"
#include "Players.h"
#include "Cards.h"

void DrawPhase::Run(shared_ptr<IPlayer> player)
{
	player->Draw();
	cout << "Player draws" << endl;
}

void PlacePhase::Run(shared_ptr<IPlayer> player)
{
	player->Place();
	cout << "Player places" << endl;
}

void AttackPhase::Run(shared_ptr<IPlayer> player)
{
	shared_ptr<ICard> card = player->mField.GetRandom();
	card->ActivateEffect();
	cout << "Player attacks" << endl;
}
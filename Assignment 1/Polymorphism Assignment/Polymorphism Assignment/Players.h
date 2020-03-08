#pragma once
#include "Definitions.h"
#include "Zone.h"

//////////////////////////////////////////////////////////////// Interface

// Player
class IPlayer
{
public:
	shared_ptr<IPlayer> mOpponent;
	Zone mHand;
	Zone mField;
	Zone mDeck;
	string mName;
	int mHealth;
	void Draw();
	void Place();
	void Destroy(shared_ptr<ICard> targetCard);
	void CreateDeck(shared_ptr<IPlayer> owner);
	void ChangeHealth(int amount);
};

//////////////////////////////////////////////////////////////// Player types

class Wizard : public IPlayer
{
public:
	Wizard();
};

class Sorceress : public IPlayer
{
public:
	Sorceress();
};
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
	void Draw();
	void Place();
	void CreateDeck();
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
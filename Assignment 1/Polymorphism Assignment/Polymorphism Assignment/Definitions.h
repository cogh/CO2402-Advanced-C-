#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <xmemory>
#include <vector>
#include <deque>
#include <sstream>

using namespace std;

//////////////////////////////////////////////////////////////// Enums

// Card types
enum ECardType {
	BASIC_MINION,
	FIREBALL,
	LIGHTNING,
	BLESS,
	VAMPIRE,
	WALL,
	HORDE,
	TRAMPLE,
	LEECH,
	SWORD,
	ARMOUR
};

// Player types
enum EPlayerType {
	SORCERESS,
	WIZARD
};

// Phase Types
enum EPlayerType {
	DRAW,
	PLACE,
	ATTACK
};

//////////////////////////////////////////////////////////////// Behaviour classes

// Effect
class IEffect
{
public:
	virtual void Activate();
};

// Phase
class Phase
{
public:
	virtual void Run(shared_ptr<IPlayer> player);
};

//////////////////////////////////////////////////////////////// Table classes

// Player
class IPlayer
{
public:
	shared_ptr<IPlayer> mOpponent;
	Zone mHand;
	Zone mField;
	string mName;
	void Draw();
	void CreateDeck();
};

// Card
class ICard
{
public:
	virtual ~ICard() = default;
protected:
	string mName;
	IEffect mEffect;
};

// Zone
class Zone {
public:
	void Shuffle();
	void Draw(Zone zone);
	void Deal(Zone zone);
	shared_ptr<ICard> GetRandom();
	CardList GetAll();
private:
	CardList cardList;
};

//////////////////////////////////////////////////////////////// Container typedefs

using CardList = deque<shared_ptr<ICard>>;
using EffectList = vector<shared_ptr<IEffect>>;
using PhaseList = vector<shared_ptr<Phase>>;
using PlayerList = vector<shared_ptr<IPlayer>>;
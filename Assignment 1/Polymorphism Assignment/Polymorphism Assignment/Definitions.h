#pragma once

// STD
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
enum EPhaseType {
	DRAW,
	PLACE,
	ATTACK
};

//////////////////////////////////////////////////////////////// Classes

class IEffect;
class ICard;
class IPlayer;
class IEffect;
class IPhase;
class Zone;

//////////////////////////////////////////////////////////////// Container typedefs

using CardList = deque<shared_ptr<ICard>>;
using EffectList = vector<shared_ptr<IEffect>>;
using PhaseList = vector<shared_ptr<IPhase>>;
using PlayerList = vector<shared_ptr<IPlayer>>;
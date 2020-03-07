#pragma once
#include "Definitions.h"
#include "Cards.h"
 
//////////////////////////////////////////////////////////////// Effects

class AttackRandomEnemy : public IEffect
{
public:
	void Activate(shared_ptr<IPlayer> owner, int attackAmount);
};

class AttackAllEnemies : public IEffect
{
public:
	void Activate(shared_ptr<IPlayer> owner, int attackAmount);
};

class HealRandomTarget : public IEffect
{
public:
	void Activate(shared_ptr<IPlayer> owner, int healAmount);
};

class Drain : public IEffect
{
public:
	void Activate(shared_ptr<IPlayer> owner, int drainAmount);
};
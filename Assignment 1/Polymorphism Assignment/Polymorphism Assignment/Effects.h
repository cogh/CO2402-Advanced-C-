#pragma once
#include "Definitions.h"
#include "Cards.h"

//////////////////////////////////////////////////////////////// Interface

// Effect
class IEffect
{
public:
	virtual ~IEffect() = default;
	virtual void Activate(shared_ptr<ICard> callingCard) = 0;
};
 
//////////////////////////////////////////////////////////////// Effects

class AttackRandomEnemy : public IEffect
{
public:
	void Activate(shared_ptr<ICard> callingCard);
};

class AttackAllEnemies : public IEffect
{
public:
	void Activate(shared_ptr<ICard> callingCard);
};

class AttackDirectly : public IEffect
{
public:
	void Activate(shared_ptr<ICard> callingCard);
};

class HealRandomTarget : public IEffect
{
public:
	void Activate(shared_ptr<ICard> callingCard);
};

class Drain : public IEffect
{
public:
	void Activate(shared_ptr<ICard> callingCard);
};
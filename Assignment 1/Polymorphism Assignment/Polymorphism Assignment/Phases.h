#pragma once
#include "Definitions.h"

//////////////////////////////////////////////////////////////// Interface

class IPhase
{
public:
	virtual void Run(shared_ptr<IPlayer> player) = 0;
};

//////////////////////////////////////////////////////////////// Phases

class DrawPhase : public IPhase
{
	void Run(shared_ptr<IPlayer> player);
};

class PlacePhase : public IPhase
{
	void Run(shared_ptr<IPlayer> player);
};

class AttackPhase : public IPhase
{
	void Run(shared_ptr<IPlayer> player);
};
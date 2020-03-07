#pragma once
#include "Definitions.h"

class DrawPhase : public Phase
{
	void Run(IPlayer* player);
};

class PlacePhase : public Phase
{
	void Run(IPlayer* player);
};

class AttackPhase : public Phase
{
	void Run(IPlayer* player);
};
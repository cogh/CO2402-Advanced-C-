#pragma once
#include "Definitions.h"

//////////////////////////////////////////////////////////////// Factory functions

// Card factory
shared_ptr<ICard> NewCard(ECardType cardType, istringstream* constructorStream);

// Player factory
shared_ptr<IPlayer> NewPlayer(EPlayerType playerType);

//////////////////////////////////////////////////////////////// Random functions

// Random integer
int Random(const float n);
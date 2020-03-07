#pragma once
#include "Definitions.h"

//////////////////////////////////////////////////////////////// Factory functions

// Card factory
shared_ptr<ICard> NewCard(ECardType cardType, istringstream* constructorStream);

//////////////////////////////////////////////////////////////// Random functions

// Random integer
int Random(const float n)
{
    return static_cast<int>(static_cast<double> (rand()) / (RAND_MAX + 1) * (n + 1));
}
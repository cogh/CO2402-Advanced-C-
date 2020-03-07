#include "Utilities.h"
#include "Cards.h"

//////////////////////////////////////////////////////////////// Factory functions

shared_ptr<ICard> NewCard(ECardType search, istringstream* constructorStream)
{
    switch (search)
    {
        case BASIC_MINION:
            return shared_ptr<ICard>(new BasicMinion(constructorStream));
        case FIREBALL:
            return shared_ptr<ICard>(new Fireball(constructorStream));
        case LIGHTNING:
            return shared_ptr<ICard>(new Lightning(constructorStream));
        case BLESS:
            return shared_ptr<ICard>(new Bless(constructorStream));
        case VAMPIRE:
            return shared_ptr<ICard>(new Vampire(constructorStream));
        case WALL:
            return shared_ptr<ICard>(new Wall(constructorStream));
        case HORDE:
            return shared_ptr<ICard>(new Horde(constructorStream));
        case TRAMPLE:
            return shared_ptr<ICard>(new Trample(constructorStream));
        case LEECH:
            return shared_ptr<ICard>(new Leech(constructorStream));
        case SWORD:
            return shared_ptr<ICard>(new Sword(constructorStream));
        case ARMOUR:
            return shared_ptr<ICard>(new Armour(constructorStream));
    }
}

//////////////////////////////////////////////////////////////// Random functions

// Random integer
int Random(const float n)
{
    return static_cast<int>(static_cast<double> (rand()) / (RAND_MAX + 1) * (n + 1));
}
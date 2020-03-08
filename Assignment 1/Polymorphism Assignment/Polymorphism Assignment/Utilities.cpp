#include "Utilities.h"
#include "Cards.h"
#include "Players.h"

//////////////////////////////////////////////////////////////// Factory functions

// Card factory
shared_ptr<ICard> NewCard(ECardType cardType, istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
    switch (cardType)
    {
        case BASIC_MINION:
            return make_shared<BasicMinion>(constructorStream, owner);
        case FIREBALL:
            return make_shared<Fireball>(constructorStream, owner);
        case LIGHTNING:
            return make_shared<Lightning>(constructorStream, owner);
        case BLESS:
            return make_shared<Bless>(constructorStream, owner);
        case VAMPIRE:
            return make_shared<Vampire>(constructorStream, owner);
        case WALL:
            return make_shared<Wall>(constructorStream, owner);
        case HORDE:
            return make_shared<Horde>(constructorStream, owner);
        case TRAMPLE:
            return make_shared<Trample>(constructorStream, owner);
        case LEECH:
            return make_shared<Leech>(constructorStream, owner);
        case SWORD:
            return make_shared<Sword>(constructorStream, owner);
        case ARMOUR:
            return make_shared<Armour>(constructorStream, owner);
    }
}

// Player factory
shared_ptr<IPlayer> NewPlayer(EPlayerType playerType)
{
    switch (playerType)
    {
    case SORCERESS:
        return make_shared<Sorceress>();
    case WIZARD:
        return make_shared<Wizard>();
    }
}

//////////////////////////////////////////////////////////////// Random functions

// Random integer
int Random(const float n)
{
    return static_cast<int>(static_cast<double> (rand()) / (RAND_MAX + 1) * (n + 1));
}
#include "Cards.h"
#include "Players.h"

//////////////////////////////////////////////////////////////// Minions

// Basic minion
BasicMinion::BasicMinion(istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
	mOwner = owner;
	*constructorStream >> mType;
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	*constructorStream >> mHealth;
	mEffect = make_shared<AttackRandomEnemy>();
}
void BasicMinion::ActivateEffect(shared_ptr<ICard> callingCard)
{
	mEffect->Activate(callingCard);
}
void BasicMinion::ChangeHealth(int amount)
{
	mHealth += amount;
}

// Vampire
Vampire::Vampire(istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
	mOwner = owner;
	*constructorStream >> mType;
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	*constructorStream >> mHealth;
}
void Vampire::ActivateEffect(shared_ptr<ICard> callingCard)
{
	mEffect->Activate(callingCard);
}

// Wall
Wall::Wall(istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
	mOwner = owner;
	*constructorStream >> mType;
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	*constructorStream >> mHealth;
}
void Wall::ActivateEffect(shared_ptr<ICard> callingCard)
{
	mEffect->Activate(callingCard);
}

// Horde
Horde::Horde(istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
	mOwner = owner;
	*constructorStream >> mType;
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	*constructorStream >> mHealth;
}
void Horde::ActivateEffect(shared_ptr<ICard> callingCard)
{
	mEffect->Activate(callingCard);
}

// Trample
Trample::Trample(istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
	mOwner = owner;
	*constructorStream >> mType;
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	*constructorStream >> mHealth;
}
void Trample::ActivateEffect(shared_ptr<ICard> callingCard)
{
	mEffect->Activate(callingCard);
}

// Leech
Leech::Leech(istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
	mOwner = owner;
	*constructorStream >> mType;
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	*constructorStream >> mHealth;
}
void Leech::ActivateEffect(shared_ptr<ICard> callingCard)
{
	mEffect->Activate(callingCard);
}

//////////////////////////////////////////////////////////////// Spells

// Fireball
Fireball::Fireball(istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
	mOwner = owner;
	*constructorStream >> mType;
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	mEffect = make_shared<AttackRandomEnemy>();
}
void Fireball::ActivateEffect(shared_ptr<ICard> callingCard)
{
	mEffect->Activate(callingCard);
}

// Lightning
Lightning::Lightning(istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
	mOwner = owner;
	*constructorStream >> mType;
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	mEffect = make_shared<AttackAllEnemies>();
}
void Lightning::ActivateEffect(shared_ptr<ICard> callingCard)
{
	mEffect->Activate(callingCard);
}

// Bless
Bless::Bless(istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
	mOwner = owner;
	*constructorStream >> mType;
	*constructorStream >> mName;
	*constructorStream >> mHeal;
	mEffect = shared_ptr<HealRandomTarget>();
}
void Bless::ActivateEffect(shared_ptr<ICard> callingCard)
{
	mEffect->Activate(callingCard);
}

//////////////////////////////////////////////////////////////// Equipment

// Sword
Sword::Sword(istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
	mOwner = owner;
	*constructorStream >> mType;
	*constructorStream >> mName;
}
void Sword::ActivateEffect(shared_ptr<ICard> callingCard)
{
	mEffect->Activate(callingCard);
}

// Armour
Armour::Armour(istringstream* constructorStream, shared_ptr<IPlayer> owner)
{
	mOwner = owner;
	*constructorStream >> mType;
	*constructorStream >> mName;
}
void Armour::ActivateEffect(shared_ptr<ICard> callingCard)
{
	mEffect->Activate(callingCard);
}
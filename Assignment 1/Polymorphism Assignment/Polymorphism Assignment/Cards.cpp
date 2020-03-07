#include "Cards.h"

//////////////////////////////////////////////////////////////// Minions

// Basic minion
BasicMinion::BasicMinion(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mHealth;
	*constructorStream >> mAttack;
	mEffect = AttackRandomEnemy();
}
void BasicMinion::ActivateEffect()
{
	mEffect.Activate();
}
void BasicMinion::ChangeHealth(int amount)
{
	mHealth += amount;
}

// Vampire
Vampire::Vampire(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mHealth;
	*constructorStream >> mAttack;
}

// Wall
Wall::Wall(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mHealth;
	*constructorStream >> mAttack;
}

// Horde
Horde::Horde(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mHealth;
	*constructorStream >> mAttack;
}

// Trample
Trample::Trample(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mHealth;
	*constructorStream >> mAttack;
}

// Leech
Leech::Leech(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	*constructorStream >> mHealth;
}

//////////////////////////////////////////////////////////////// Spells

// Fireball
Fireball::Fireball(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	mEffect = AttackRandomEnemy();
}
void Fireball::ActivateEffect(IPlayer opponent)
{
	mEffect.Activate();
}

// Lightning
Lightning::Lightning(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	mEffect = AttackAllEnemies();
}
void Lightning::ActivateEffect(IPlayer opponent)
{
	mEffect.Activate();
}

// Bless
Bless::Bless(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mHeal;
	mEffect = HealRandomTarget();
}

//////////////////////////////////////////////////////////////// Equipment

// Sword
Sword::Sword(istringstream* constructorStream)
{
	*constructorStream >> mName;
}

// Armour
Armour::Armour(istringstream* constructorStream)
{
	*constructorStream >> mName;
}
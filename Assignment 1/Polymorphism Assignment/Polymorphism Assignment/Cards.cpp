#include "Cards.h"
#include "Players.h"

//////////////////////////////////////////////////////////////// Minions

// Basic minion
BasicMinion::BasicMinion(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mHealth;
	*constructorStream >> mAttack;
	mEffect.reset(new AttackRandomEnemy());
}
void BasicMinion::ActivateEffect()
{
	mEffect->Activate();
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
void Vampire::ActivateEffect()
{
	mEffect->Activate();
}

// Wall
Wall::Wall(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mHealth;
	*constructorStream >> mAttack;
}
void Wall::ActivateEffect()
{
	mEffect->Activate();
}

// Horde
Horde::Horde(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mHealth;
	*constructorStream >> mAttack;
}
void Horde::ActivateEffect()
{
	mEffect->Activate();
}

// Trample
Trample::Trample(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mHealth;
	*constructorStream >> mAttack;
}
void Trample::ActivateEffect()
{
	mEffect->Activate();
}

// Leech
Leech::Leech(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	*constructorStream >> mHealth;
}
void Leech::ActivateEffect()
{
	mEffect->Activate();
}

//////////////////////////////////////////////////////////////// Spells

// Fireball
Fireball::Fireball(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	mEffect.reset(new AttackRandomEnemy());
}
void Fireball::ActivateEffect()
{
	mEffect->Activate();
}

// Lightning
Lightning::Lightning(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mAttack;
	mEffect.reset(new AttackAllEnemies());
}
void Lightning::ActivateEffect()
{
	mEffect->Activate();
}

// Bless
Bless::Bless(istringstream* constructorStream)
{
	*constructorStream >> mName;
	*constructorStream >> mHeal;
	mEffect.reset(new HealRandomTarget());
}
void Bless::ActivateEffect()
{
	mEffect->Activate();
}

//////////////////////////////////////////////////////////////// Equipment

// Sword
Sword::Sword(istringstream* constructorStream)
{
	*constructorStream >> mName;
}
void Sword::ActivateEffect()
{
	mEffect->Activate();
}

// Armour
Armour::Armour(istringstream* constructorStream)
{
	*constructorStream >> mName;
}
void Armour::ActivateEffect()
{
	mEffect->Activate();
}
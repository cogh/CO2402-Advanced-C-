#pragma once
#include "Definitions.h"
#include "Effects.h"

//////////////////////////////////////////////////////////////// Minions

class Minion : public ICard
{
public:
	IEffect mEffect;
	string mName;
};

class BasicMinion : public Minion
{
public:
	BasicMinion(istringstream* constructorStream);
	void ActivateEffect();
	void ChangeHealth(int amount);
private:
	string mHealth;
	string mAttack;
};

class Vampire : public Minion
{
public:
	Vampire(istringstream* constructorStream);
private:
	string mHealth;
	string mAttack;
};

class Wall : public Minion
{
public:
	Wall(istringstream* constructorStream);
private:
	string mHealth;
	string mAttack;
};

class Horde : public Minion
{
public:
	Horde(istringstream* constructorStream);
private:
	string mHealth;
	string mAttack;
};

class Trample : public Minion
{
public:
	Trample(istringstream* constructorStream);
private:
	string mHealth;
	string mAttack;
};

class Leech : public Minion
{
public:
	Leech(istringstream* constructorStream);
private:
	string mHealth;
	string mAttack;
};

//////////////////////////////////////////////////////////////// Spells

class Spell : public ICard
{
public:
	string mName;
	IEffect mEffect;
};

class Fireball : public Spell
{
public:
	Fireball(istringstream* constructorStream);
	void ActivateEffect(IPlayer opponent);
private:
	int mAttack;
};

class Lightning : public Spell
{
public:
	Lightning(istringstream* constructorStream);
	void ActivateEffect(IPlayer opponent);
private:
	int mAttack;
};

class Bless : public Spell
{
public:
	Bless(istringstream* constructorStream);
private:
	int mHeal;
};

//////////////////////////////////////////////////////////////// Equipment

class Equipment : public ICard
{
public:
	string mName;
	IEffect mEffect;
};

class Sword : public Equipment
{
public:
	Sword(istringstream* constructorStream);
};

class Armour : public Equipment
{
public:
	Armour(istringstream* constructorStream);
};

//////////////////////////////////////////////////////////////// Player card

class PlayerCard : public ICard
{

};
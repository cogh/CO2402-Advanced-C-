#pragma once
#include "Definitions.h"
#include "Effects.h"

//////////////////////////////////////////////////////////////// Interface

class ICard
{
public:
	virtual ~ICard() = default;
	virtual void ActivateEffect() = 0;
protected:
	string mName;
};

//////////////////////////////////////////////////////////////// Minions

class Minion : public ICard
{
public:
	shared_ptr<IEffect> mEffect;
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
	void ActivateEffect();
private:
	string mHealth;
	string mAttack;
};

class Wall : public Minion
{
public:
	Wall(istringstream* constructorStream);
	void ActivateEffect();
private:
	string mHealth;
	string mAttack;
};

class Horde : public Minion
{
public:
	Horde(istringstream* constructorStream);
	void ActivateEffect();
private:
	string mHealth;
	string mAttack;
};

class Trample : public Minion
{
public:
	Trample(istringstream* constructorStream);
	void ActivateEffect();
private:
	string mHealth;
	string mAttack;
};

class Leech : public Minion
{
public:
	Leech(istringstream* constructorStream);
	void ActivateEffect();
private:
	string mHealth;
	string mAttack;
};

//////////////////////////////////////////////////////////////// Spells

class Spell : public ICard
{
public:
	string mName;
	shared_ptr<IEffect> mEffect;
};

class Fireball : public Spell
{
public:
	Fireball(istringstream* constructorStream);
	void ActivateEffect();
private:
	int mAttack;
};

class Lightning : public Spell
{
public:
	Lightning(istringstream* constructorStream);
	void ActivateEffect();
private:
	int mAttack;
};

class Bless : public Spell
{
public:
	Bless(istringstream* constructorStream);
	void ActivateEffect();
private:
	int mHeal;
};

//////////////////////////////////////////////////////////////// Equipment

class Equipment : public ICard
{
public:
	string mName;
	shared_ptr<IEffect> mEffect;
};

class Sword : public Equipment
{
public:
	Sword(istringstream* constructorStream);
	void ActivateEffect();
};

class Armour : public Equipment
{
public:
	Armour(istringstream* constructorStream);
	void ActivateEffect();
};

//////////////////////////////////////////////////////////////// Player card

class PlayerCard : public ICard
{

};
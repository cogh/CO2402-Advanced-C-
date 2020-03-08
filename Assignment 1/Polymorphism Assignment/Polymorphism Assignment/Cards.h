#pragma once
#include "Definitions.h"
#include "Effects.h"

//////////////////////////////////////////////////////////////// Interface

class ICard
{
public:
	virtual ~ICard() = default;
	virtual void ActivateEffect(shared_ptr<ICard> callingCard) = 0;
	virtual int GetAttack() { return 0; }
	virtual int GetHealth() { return 0; }
	string mName;
	int mType;
	shared_ptr<IPlayer> mOwner;
};

//////////////////////////////////////////////////////////////// Minions

class Minion : public ICard
{
public:
	shared_ptr<IEffect> mEffect;
};

class BasicMinion : public Minion
{
public:
	BasicMinion(istringstream* constructorStream, shared_ptr<IPlayer> owner);
	void ActivateEffect(shared_ptr<ICard> callingCard);
	void ChangeHealth(int amount);
	int GetAttack()
	{
		return mAttack;
	}
	int GetHealth()
	{
		return mHealth;
	}
private:
	int mHealth;
	int mAttack;
};

class Vampire : public Minion
{
public:
	Vampire(istringstream* constructorStream, shared_ptr<IPlayer> owner);
	void ActivateEffect(shared_ptr<ICard> callingCard);
private:
	string mHealth;
	string mAttack;
};

class Wall : public Minion
{
public:
	Wall(istringstream* constructorStream, shared_ptr<IPlayer> owner);
	void ActivateEffect(shared_ptr<ICard> callingCard);
private:
	string mHealth;
	string mAttack;
};

class Horde : public Minion
{
public:
	Horde(istringstream* constructorStream, shared_ptr<IPlayer> owner);
	void ActivateEffect(shared_ptr<ICard> callingCard);
private:
	string mHealth;
	string mAttack;
};

class Trample : public Minion
{
public:
	Trample(istringstream* constructorStream, shared_ptr<IPlayer> owner);
	void ActivateEffect(shared_ptr<ICard> callingCard);
private:
	string mHealth;
	string mAttack;
};

class Leech : public Minion
{
public:
	Leech(istringstream* constructorStream, shared_ptr<IPlayer> owner);
	void ActivateEffect(shared_ptr<ICard> callingCard);
private:
	string mHealth;
	string mAttack;
};

//////////////////////////////////////////////////////////////// Spells

class Spell : public ICard
{
public:
	shared_ptr<IEffect> mEffect;
};

class Fireball : public Spell
{
public:
	Fireball(istringstream* constructorStream, shared_ptr<IPlayer> owner);
	void ActivateEffect(shared_ptr<ICard> callingCard);
private:
	int mAttack;
};

class Lightning : public Spell
{
public:
	Lightning(istringstream* constructorStream, shared_ptr<IPlayer> owner);
	void ActivateEffect(shared_ptr<ICard> callingCard);
private:
	int mAttack;
};

class Bless : public Spell
{
public:
	Bless(istringstream* constructorStream, shared_ptr<IPlayer> owner);
	void ActivateEffect(shared_ptr<ICard> callingCard);
private:
	int mHeal;
};

//////////////////////////////////////////////////////////////// Equipment

class Equipment : public ICard
{
public:
	shared_ptr<IEffect> mEffect;
};

class Sword : public Equipment
{
public:
	Sword(istringstream* constructorStream, shared_ptr<IPlayer> owner);
	void ActivateEffect(shared_ptr<ICard> callingCard);
};

class Armour : public Equipment
{
public:
	Armour(istringstream* constructorStream, shared_ptr<IPlayer> owner);
	void ActivateEffect(shared_ptr<ICard> callingCard);
};

//////////////////////////////////////////////////////////////// Player card

class PlayerCard : public ICard
{

};
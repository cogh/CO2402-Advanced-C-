#include "Effects.h"
#include "Players.h"

void AttackRandomEnemy::Activate(shared_ptr<IPlayer> owner, int attackAmount)
{
	auto targetCard = owner->mOpponent->mField.GetRandom();
	shared_ptr<BasicMinion> targetMinion(dynamic_cast<BasicMinion*>(targetCard.get()));
	targetMinion->ChangeHealth(-attackAmount);
}

void AttackAllEnemies::Activate(shared_ptr<IPlayer> owner, int attackAmount)
{
	CardList targetCardList = owner->mField.GetAll();
	for (auto& targetCard : targetCardList)
	{
		shared_ptr<BasicMinion> targetMinion(dynamic_cast<BasicMinion*>(targetCard.get()));
		targetMinion->ChangeHealth(-attackAmount);
	}
}

void HealRandomTarget::Activate(shared_ptr<IPlayer> owner, int healAmount)
{

}

void Drain::Activate(shared_ptr<IPlayer> owner, int drainAmount)
{

}

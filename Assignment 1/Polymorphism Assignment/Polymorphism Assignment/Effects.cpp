#include "Effects.h"
#include "Players.h"

void AttackRandomEnemy::Activate(shared_ptr<ICard> callingCard)
{
	auto targetField = callingCard->mOwner->mOpponent->mField;
	if (targetField.Size() > 0)
	{
		auto targetCard = callingCard->mOwner->mOpponent->mField.GetRandom();
		cout << callingCard->mName << " attacks " << targetCard->mName << ": ";
		shared_ptr<BasicMinion> targetMinion = dynamic_pointer_cast<BasicMinion>(targetCard);
		targetMinion->ChangeHealth(-callingCard->GetAttack());
		if (targetMinion->GetHealth() > 0)
		{
			cout << targetMinion->mName << " now " << targetMinion->GetHealth() << endl;
		}
		else // Kill enemy
		{
			cout << targetMinion->mName << " killed " << endl;
			targetMinion->mOwner->Destroy(targetCard);
		}
	}
	else
	{
		cout << callingCard->mName << " attacks " << callingCard->mOwner->mOpponent->mName << ": ";
		callingCard->mOwner->mOpponent->ChangeHealth(-callingCard->GetAttack());
		cout << callingCard->mOwner->mOpponent->mName << " now " << callingCard->mOwner->mOpponent->mHealth << endl;
	}
}

void AttackAllEnemies::Activate(shared_ptr<ICard> callingCard)
{
	cout << callingCard->mName << endl;
	auto targetField = callingCard->mOwner->mOpponent->mField;
	if (targetField.Size() > 0)
	{
		CardList targetCardList = callingCard->mOwner->mOpponent->mField.GetAll();
		for (auto& targetCard : targetCardList)
		{
			cout << callingCard->mName << " attacks " << targetCard->mName << ": ";
			shared_ptr<BasicMinion> targetMinion = dynamic_pointer_cast<BasicMinion>(targetCard);
			targetMinion->ChangeHealth(-callingCard->GetAttack());
			if (targetMinion->GetHealth() > 0)
			{
				cout << targetMinion->mName << " now " << targetMinion->GetHealth() << endl;
			}
			else // Kill enemy
			{
				cout << targetMinion->mName << " killed " << endl;
				targetMinion->mOwner->Destroy(targetCard);
			}
		}
	}
	else
	{
		cout << callingCard->mName << " attacks " << callingCard->mOwner->mOpponent->mName << ": ";
		callingCard->mOwner->mOpponent->ChangeHealth(-callingCard->GetAttack());
		cout << callingCard->mOwner->mOpponent->mName << " now " << callingCard->mOwner->mOpponent->mHealth << endl;
	}
}

void AttackDirectly::Activate(shared_ptr<ICard> callingCard)
{
	cout << callingCard->mName << " attacks " << callingCard->mOwner->mOpponent->mName << ": ";
	callingCard->mOwner->mOpponent->ChangeHealth(-callingCard->GetAttack());
	cout << callingCard->mOwner->mOpponent->mName << " now " << callingCard->mOwner->mOpponent->mHealth << endl;
}

void HealRandomTarget::Activate(shared_ptr<ICard> callingCard)
{

}

void Drain::Activate(shared_ptr<ICard> callingCard)
{

}

#include "Players.h"
#include "Utilities.h"
#include "Zone.h"
#include "Cards.h"


void IPlayer::Draw()
{
	mHand.Draw(mDeck);
}

void IPlayer::Place()
{
	// Get card
	shared_ptr<ICard> cardToPlace = mHand.GetRandom();
	// Play minions
	if (cardToPlace->mType == BASIC_MINION)
	{
		cout << " places ";
		mHand.Deal(mField);
	}
	// Use spells immediately
	else if (cardToPlace->mType == FIREBALL || cardToPlace->mType == LIGHTNING)
	{
		cout << " activates ";
		cardToPlace->ActivateEffect(cardToPlace);
		mHand.Destroy(cardToPlace);
	}
}

void IPlayer::Destroy(shared_ptr<ICard> targetCard)
{
	mField.Destroy(targetCard);
}

void IPlayer::CreateDeck(shared_ptr<IPlayer> owner)
{
	//cout << "Player creates deck" << endl;
	// Get file
	string fileName = mName + ".txt";
	//cout << "Filename: " << fileName << endl;
	ifstream file(fileName);
	// Read file into deck
	string line;
	while (getline(file, line))
	{
		// New card
		shared_ptr<ICard> newCard;
		istringstream stringStream(line);
		int type;
		stringStream >> type;
		stringStream.seekg(0);
		switch (type)
		{
			case 1:
				newCard = NewCard(BASIC_MINION, &stringStream, owner);
				mDeck.Add(newCard);
				break;
			case 2:
				newCard = NewCard(FIREBALL, &stringStream, owner);
				mDeck.Add(newCard);
				break;
			case 3:
				newCard = NewCard(LIGHTNING, &stringStream, owner);
				mDeck.Add(newCard);
				break;
			/*case 4:
				newCard = NewCard(BLESS, &stringStream);
				break;
			case 5:
				newCard = NewCard(VAMPIRE, &stringStream);
				break;
			case 6:
				newCard = NewCard(WALL, &stringStream);
				break;
			case 7:
				newCard = NewCard(HORDE, &stringStream);
				break;
			case 8:
				newCard = NewCard(TRAMPLE, &stringStream);
				break;
			case 9:
				newCard = NewCard(LEECH, &stringStream);
				break;
			case 10:
				newCard = NewCard(SWORD, &stringStream);
				break;
			case 11:
				newCard = NewCard(ARMOUR, &stringStream);
				break;*/
		}
	}
}

void IPlayer::ChangeHealth(int amount)
{
	mHealth += amount;
}

Wizard::Wizard()
{
	mName = "wizard";
	mHealth = 30;
}

Sorceress::Sorceress()
{
	mName = "sorceress";
	mHealth = 30;
}
#include "Players.h"
#include "Utilities.h"
#include "Zone.h"


void IPlayer::Draw()
{
	mHand.Draw(mDeck);
}

void IPlayer::Place()
{
	mHand.Deal(mField);
}

void IPlayer::CreateDeck()
{
	cout << "Player creates deck" << endl;
	// Get file
	string fileName = mName + ".txt";
	cout << "Filename: " << fileName << endl;
	ifstream file(fileName);
	// Read file into deck
	string line;
	while (getline(file, line))
	{
		cout << "Player adds card" << endl;
		// New card
		shared_ptr<ICard> newCard;
		istringstream stringStream(line);
		int type;
		stringStream >> type;
		switch (type)
		{
			case 1:
				newCard = NewCard(BASIC_MINION, &stringStream);
				break;
			/*case 2:
				newCard = NewCard(FIREBALL, &stringStream);
				break;
			case 3:
				newCard = NewCard(LIGHTNING, &stringStream);
				break;
			case 4:
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
		mDeck.Add(newCard);
	}
}

Wizard::Wizard()
{
	mName = "wizard";
}

Sorceress::Sorceress()
{
	mName = "sorceress";
}
#include "Players.h"

class Player
{
public:
	shared_ptr<Player> mOpponent;
	Zone mHand;
	Zone mField;
	string mName;
	void Draw()
	{
		mHand.Draw(mField);
	}
	void CreateDeck()
	{
		// Get file
		string fileName = mName + ".txt";
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
			switch (type)
			{
				case 1:
					newCard.reset(new BasicMinion(&stringStream));
					break;
				/*case 2:
					newCard.reset(new Fireball(&stringStream));
					break;
				case 3:
					newCard.reset(new Lightning(&stringStream));
					break;
				case 4:
					newCard.reset(new Bless(&stringStream));
					break;
				case 5:
					newCard.reset(new Vampire(&stringStream));
					break;
				case 6:
					newCard.reset(new Wall(&stringStream));
					break;
				case 7:
					newCard.reset(new Horde(&stringStream));
					break;
				case 8:
					newCard.reset(new Trample(&stringStream));
					break;
				case 9:
					newCard.reset(new Leech(&stringStream));
					break;
				case 10:
					newCard.reset(new Sword(&stringStream));
					break;
				case 11:
					newCard.reset(new Armour(&stringStream));
					break;*/
			}
		}
	}
};
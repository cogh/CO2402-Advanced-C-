#include "Zone.h"
#include "Utilities.h"
#include "Cards.h"

// Zone
void Zone::Shuffle()
{
	//shuffle(cardList.begin(), cardList.end(), default_random_engine(seed));
}

void Zone::Draw(Zone& zone)
{
	cardList.push_back(zone.cardList.front());
	zone.cardList.pop_front();
	cout << cardList.back()->mName << endl;
}

void Zone::Deal(Zone& zone)
{
	cout << cardList.front()->mName << endl;
	zone.cardList.push_front(cardList.front());
	cardList.pop_front();
}

void Zone::Add(shared_ptr<ICard> card)
{
	cardList.push_back(card);
}

void Zone::Destroy(shared_ptr<ICard> targetCard)
{
	auto i = cardList.begin();

	bool runLoop = true;
	while (i != cardList.end()) {
		if (i->get() == targetCard.get())
		{
			i->reset();
			i = cardList.erase(i);
		}
		else
		{
			i++;
		}
	}
}

shared_ptr<ICard> Zone::GetRandom()
{
	//return (cardList.at(Random(cardList.size())));
	return (cardList.front());
}

CardList Zone::GetAll()
{
	return cardList;
}

int Zone::Size()
{
	return cardList.size();
}
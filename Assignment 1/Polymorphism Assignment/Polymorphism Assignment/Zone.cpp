#include "Zone.h"
#include "Utilities.h"

// Zone
void Zone::Shuffle()
{
	//shuffle(cardList.begin(), cardList.end(), default_random_engine(seed));
}

void Zone::Draw(Zone zone)
{
	cardList.push_back(zone.cardList.front());
	zone.cardList.pop_front();
}

void Zone::Deal(Zone zone)
{
	zone.cardList.push_front(cardList.front());
}

void Zone::Add(shared_ptr<ICard> card)
{
	cardList.push_back(card);
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
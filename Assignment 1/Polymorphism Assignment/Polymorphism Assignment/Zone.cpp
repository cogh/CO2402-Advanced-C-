#include "Zone.h"
#include "Utilities.h"

// Zone
class Zone {
public:
	void Shuffle()
	{
		//shuffle(cardList.begin(), cardList.end(), default_random_engine(seed));
	}
	void Draw(Zone zone)
	{
		cardList.push_back(zone.cardList.front());
		zone.cardList.pop_front();
	}
	void Deal(Zone& zone)
	{
		zone.cardList.push_front(cardList.front());
	}
	shared_ptr<ICard> GetRandom()
	{
		return (cardList.at(Random(cardList.size())))
	}
	CardList GetAll()
	{

	}
private:
	CardList cardList;
};
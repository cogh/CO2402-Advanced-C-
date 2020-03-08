#pragma once
#include "Definitions.h"

// Zone
class Zone {
public:
	void Shuffle();
	void Draw(Zone zone);
	void Deal(Zone zone);
	void Add(shared_ptr<ICard>);
	shared_ptr<ICard> GetRandom();
	CardList GetAll();
private:
	CardList cardList;
};
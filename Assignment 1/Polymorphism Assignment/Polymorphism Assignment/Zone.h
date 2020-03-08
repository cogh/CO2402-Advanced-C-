#pragma once
#include "Definitions.h"

// Zone
class Zone {
public:
	void Shuffle();
	void Draw(Zone& zone);
	void Deal(Zone& zone);
	void Add(shared_ptr<ICard>);
	void Destroy(shared_ptr<ICard>);
	shared_ptr<ICard> GetFront();
	shared_ptr<ICard> GetRandom();
	CardList GetAll();
	int Size();
private:
	CardList cardList;
};
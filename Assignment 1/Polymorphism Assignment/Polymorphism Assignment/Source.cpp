#include <iostream>
#include <xmemory>
#include <vector>
#include <deque>

using namespace std;

class Game;
class Player;
class Card;
class Phase;
class Action;
class Effect;
class Condition;


using CardList = deque<shared_ptr<Card>>;
using EffectList = vector<shared_ptr<Effect>>;
using PhaseList = vector<shared_ptr<Phase>>;
using ActionList = deque<shared_ptr<Action>>;
using ConditionList = vector<shared_ptr<Condition>>;
using PlayerList = vector<shared_ptr<Player>>;

class Card
{
	string name;
	EffectList effectList;
	bool TriggerExists()
	{
		
	}
};

class Minion : Card
{

};

class Spell : Card
{

};

class PlayerCard : Card
{

};

class Equipment : Card
{

};

class Zone {
	CardList cardList;
};

class Deck : Zone
{
	void Shuffle();
};

class Field : Zone
{
	CardList cardList;
};

class Hand : Zone
{
	CardList cardList;
};

class Player
{
	Zone deck;
	Zone hand;
	Zone field;
};

class Wizard : Player
{

};

class Sorceress : Player
{

};

class Effect
{
	ConditionList conditionList;
	ActionList actionList;
	ActionList triggerList;
};

class Action
{

};

class Condition
{

};

class AttackTarget : Effect
{

};

class AttackAll : Effect
{

};

class Heal : Effect
{

};

class Drain : Effect
{

};

class Phase
{
	virtual void Run(Player* player);
};

class DrawPhase : Phase
{
	void Run(Player* player)
	{
		player->hand.push_back(move(player->deck));
	}
};

class MainPhase : Phase
{

};

class EndPhase : Phase
{

};

class Game
{
	PlayerList playerList;
	PhaseList phaseList;
	int phaseIndex;
	void Run()
	{
		for (auto& player : playerList) {
			for (auto& phase : phaseList) {
				phase->run();
			}
		}
	}
	ActionList triggerList;
};

int main() 
{

}
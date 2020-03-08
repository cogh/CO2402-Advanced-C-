#include "Definitions.h"
#include "Game.h"

using namespace std;

//////////////////////////////////////////////////////////////// Main

int main() 
{
	// Create game
	Game game = Game();
	cout << "Game created" << endl;

	// Add players
	game.AddPlayer("sorceress");
	game.AddPlayer("wizard");
	cout << "Players added" << endl;

	// Set phases
	game.SetPhases();

	// Start game
	game.StartGame();
	cout << "Game started" << endl << endl;

	// Run game
	while (game.mRun == true)
	{
		game.Run();
	}
}






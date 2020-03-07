#include "Definitions.h"
#include "Game.h"

using namespace std;

//////////////////////////////////////////////////////////////// Main

int main() 
{
	// Create game
	Game game = Game();

	// Add players
	game.AddPlayer("wizard");
	game.AddPlayer("sorceress");

	// Start game
	game.StartGame();

	// Run game
	while (game.mRun == true)
	{
		game.Run();
	}
}






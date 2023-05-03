//#include "Game.h"
#include "Room.h"

int main()
{
	//	Game game; 
	int numRows = 5, numColumns = 5, numEnemies = 0;

	Room Prova{numRows, numColumns, numEnemies};

	Prova.PrintRoom();
}
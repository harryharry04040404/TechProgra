#include "header.h"

int main() {

	Board board [NUM_ROWS][NUM_COLUMNS];
	Player myPlayer;

	InitializeBoard(board);

	while (GameOver(board) != true) 
	{
		PrintBoard(board);

		CheckMovement(myPlayer);
		SetPos(myPlayer, CheckMovement());
	}
		
	ExistsCoin;
	MovePlayer();
}


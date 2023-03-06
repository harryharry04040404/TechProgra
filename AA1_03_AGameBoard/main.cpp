#include "header.h"
#include <stdlib.h>
int main() {
    srand(time(NULL));
	int piedras = 0;
	int monedas = 0;
	
	Player myPlayer;
	Board Board[NUM_ROWS][NUM_COLUMNS];
	for (int i = 0; i < NUM_COLUMNS; i++)
	{
		for (int j = 0; j < NUM_ROWS; j++)
		{
			Board[i][j].hasCoin = false;
			Board[i][j].hasStone = false;

		}
	}

	InitializeBoard(piedras,monedas, myPlayer, Board);
	
	while (!GameOver(Board))
	{
		PrintBoard(Board,myPlayer);
		Movement move = MovePlayer();
		SetPos(myPlayer, move, Board);
		AddScore(move, myPlayer, Board);
		MovePlayer();
		system("CLS");
	}
}
		
	


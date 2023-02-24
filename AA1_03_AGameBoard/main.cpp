#include "header.h"
#include <stdlib.h>
int main() {
    srand(time(NULL));
	int piedras = 0;
	int monedas = 0;
	
	Player myPlayer;
	Position posicion[NUM_ROWS][NUM_COLUMNS];
	for (int i = 0; i < NUM_COLUMNS; i++)
	{
		for (int j = 0; j < NUM_ROWS; j++)
		{
			posicion[i][j].hasCoin = false;
			posicion[i][j].hasStone = false;

		}
	}

	InitializeBoard(piedras,monedas, myPlayer,posicion);
	
	while (!GameOver(posicion)) 
	{
		PrintBoard(posicion,myPlayer);
		MovePlayer();
		ExistsCoin;
		MovePlayer();
	}
}
		
	


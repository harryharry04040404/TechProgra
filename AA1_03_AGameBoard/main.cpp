#include "header.h"
#include <stdlib.h>
#include <Windows.h>
int main() {
  //configuration 
	const int FPS = 60;
	int frameCount = 0;
	bool userPressedKey = false;
	//Gameloop
	while (true)
	{
		//INPUT
		if (GetAsyncKeyState(VK_UP))
		{
			userPressedKey = true;
		}
		if (userPressedKey)
		{
			system("CLS");
			frameCount = 0;
			userPressedKey = false;
		}
		//Render / draw
		std::cout << frameCount;
		++frameCount;
		//FrameControl
		Sleep(1000 / FPS);
	}
	

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
		
	


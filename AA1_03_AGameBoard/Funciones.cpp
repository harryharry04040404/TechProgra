#pragma once
#include "header.h"

int RandomBetween(int min, int max) {

	int result;

	result = rand() % (max - min + 1) + min;

	return result;
}

void InitializeBoard(int& piedras, int& monedas, Player& jugador, Position posicion[][NUM_COLUMNS]) {

	piedras = RandomBetween(0, (int)(0.2 * NUM_ROWS * NUM_COLUMNS));

	monedas = RandomBetween(1, (int)(0.3 * NUM_ROWS * NUM_COLUMNS));

	
		for(int j = 0; j<piedras;j++)
		{
			int x = RandomBetween(0, NUM_ROWS - 1);
			int y = RandomBetween(0, NUM_COLUMNS);
			
			if (posicion[x][y].hasStone == true)
				j--;
			else
				posicion[x][y].hasStone = true;
		}

		for (int j = 0; j < monedas; j++)
		{
			int x = RandomBetween(0, NUM_ROWS - 1);
			int y = RandomBetween(0, NUM_COLUMNS);

			if (posicion[x][y].hasCoin == true|| posicion[x][y].hasStone == true)
				j--;
			else
				posicion[x][y].hasCoin = true;
		}


		do {
			jugador.x = RandomBetween(0, (NUM_ROWS - 1) * (NUM_COLUMNS - 1));
			jugador.y = RandomBetween(0, (NUM_ROWS - 1) * (NUM_COLUMNS - 1));
		}	 while (posicion[jugador.x][jugador.y].hasCoin || posicion[jugador.x][jugador.y].hasStone);
		
}

bool CheckMovement(Player& player, Movement movementType, Position posicion[][NUM_COLUMNS])
{
	
		switch (movementType) 
		{

		case UP:
			if (player.x != 0 || !posicion[player.x-1][player.y].hasStone)
			{
				return true;
			}
			else 
			{
				return false;
			}
			break;

		case DOWN:
			if (player.x != NUM_ROWS-1 || !posicion[player.x + 1][player.y].hasStone)
			{
				return true;
			}
			else 
			{
				return false;
			}
			break;

		case LEFT:
			if (player.y != 0 || !posicion[player.x][player.y-1].hasStone)
			{
				return true;
			}
			else 
			{
				return false;
			}
			break;

		case RIGHT:
			if (player.y != NUM_COLUMNS-1 || !posicion[player.x][player.y+1].hasStone)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		}
	}


void AddScore(Movement movementType, Player& player, Position position[][NUM_COLUMNS])
{

	if (ExistsCoin(player, position, movementType))
	{
		player.score += 1;
		position [player.x][player.y].hasCoin = false;
	}
}

void SetPos(Player& player, Movement movementType, Position posicion[][NUM_COLUMNS]) {


	if (CheckMovement(player, movementType, posicion)) 
	{

		switch (movementType) 
		{

		case UP:

			player.x -= 1;
			break;

		case DOWN:

			player.x += 1;
			break;

		case LEFT:

			player.y -= 1;
			break;

		case RIGHT:

			player.y += 1;
			break;
		}
	}
	else
	{
			std::cout << "error input movement type" << std::endl;
	}
}

bool ExistsCoin(Player jugador, Position posicion[][NUM_COLUMNS], Movement movementType) {
	
		switch (movementType)
		{

		case UP:
			if (posicion[jugador.x - 1][jugador.y].hasCoin)
				return true;
			else
				return false;
			break;

		case DOWN:
			if (posicion[jugador.x + 1][jugador.y].hasCoin)
				return true;
			else
				return false;
			break;
		case LEFT:
			if (posicion[jugador.x][jugador.y-1].hasCoin)
				return true;
			else
				return false;
			break;

		case RIGHT:
			if (posicion[jugador.x][jugador.y++].hasCoin)
				return true;
			else
				return false;
			break;
		}
	}


Movement MovePlayer()
{
	char action;
	std::cout << std::endl << std::endl << "input action(W, A, S, D): " << std::endl;
	std::cin >> action;

	switch (action)
	{
	case 'w':
	case 'W':
		return UP;
		break;

	case 's':
	case'S':
		return DOWN;
		break;

	case'a':
	case'A':
		return LEFT;
		break;

	case'd':
	case'D':
		return RIGHT;
		break;
	default:
		std::cout << std::endl << "Invalid INPUT"<< std::endl;
		break;
	}
	
}


bool GameOver(Position posicion[NUM_ROWS][NUM_COLUMNS])
{
	for (int i = 0; i < NUM_COLUMNS; i++)
	{
		for (int j = 0; j < NUM_ROWS; j++)
		{
			if (posicion[i][j].hasCoin)
				return false;
		}
	}
	return true;
}

void PrintBoard(Position posicion[][NUM_COLUMNS], Player jugador)
{
	for (int i = 0; i < NUM_ROWS; i++)
	{
		for (int j = 0; j < NUM_COLUMNS; j++)
		{
			if (posicion[i][j].hasCoin)
				std::cout << "C ";
			else if (posicion[i][j].hasStone)
				std::cout << "S ";
			else if (i == jugador.x && j == jugador.y)
				std::cout << "P ";

			else
				std::cout << "0 ";
		}
		std::cout << std::endl;
	}
	//std::cout << std::endl << std::endl << "Your score is " + jugador.score;
}
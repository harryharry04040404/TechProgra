#pragma once
#include "header.h"

int RandomBetween(int min, int max) {

	int result;

	result = rand() % (max - min + 1) + min;

	return result;
}

void InitializeBoard(Board& board) {

	board.stones = RandomBetween(0, 0.2 * NUM_ROWS * NUM_COLUMNS);

	board.coins.numberOfCoins = RandomBetween(0, 0.3 * NUM_ROWS * NUM_COLUMNS);

	//for (int i = 0; i < board.coins.numberOfCoins; i++) {}

	board.coins.x = RandomBetween(0, (NUM_ROWS-1) * (NUM_COLUMNS-1));

	board.coins.y = RandomBetween(0, (NUM_ROWS-1) * (NUM_COLUMNS-1));

	board.player.x = RandomBetween(0, (NUM_ROWS-1) * (NUM_COLUMNS-1));

	board.player.y = RandomBetween(0, (NUM_ROWS-1) * (NUM_COLUMNS-1));
}

bool CheckMovement(Player& player, Movement movementType) 
{

	if ((player.x != 0) && (player.x != (NUM_ROWS-1)) && (player.y != 0) && (player.y != (NUM_COLUMNS-1)))
	{

		return true;
	}
	else
	{

		switch (movementType) 
		{

		case UP:
			if (player.x != 0) 
			{

				return true;
			}
			else {

				return false;
			}
			break;

		case DOWN:
			if (player.x != NUM_ROWS-1) 
			{

				return true;
			}
			else {

				return false;
			}
			break;

		case LEFT:
			if (player.y != 0)
			{

				return true;
			}
			else 
			{

				return false;
			}
			break;

		case RIGHT:
			if (player.y != NUM_COLUMNS-1)
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
}

void AddScore(Movement movementType, Player& player, Board board) {

	

	 ExistsCoin(movementType, player, board);

	if (ExistsCoin) {

		player.score += 1;
	}
}

void SetPos(Player& player, Movement movementType) {


	if (CheckMovement(player.x,player.y)) 
	{

		switch (movementType) 
		{

		case UP:

			player.x += 1;
			break;

		case DOWN:

			player.x -= 1;
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

bool ExistsCoin(Movement movementType, Player player, Board board) {

	switch (movementType) {

	case UP:

		if ((player.x + 1 == board.coins.x) && (player.y == board.coins.y)) {
			board.coins.numberOfCoins -= 1;
			return true;
		}
		else {

			return false;
		}
		break;

	case DOWN:

		if ((player.x - 1 == board.coins.x) && (player.y == board.coins.y)) {
			board.coins.numberOfCoins -= 1;
			return true;
		}
		else {

			return false;
		}
		break;

	case LEFT:

		if ((player.y - 1 == board.coins.y) && (player.x == board.coins.x)) {
			board.coins.numberOfCoins -= 1;
			return true;
		}
		else {

			return false;
		}
		break;

	case RIGHT:

		if ((player.y + 1 == board.coins.y) && (player.x == board.coins.x)) {
			 board.coins.numberOfCoins -= 1;
			 return true;
		}
		else {

			return false;
		}
		break;
	}
}

void MovePlayer()
{
	
}

bool GameOver(Board& board) 
{
	if (board.numberOfCoins == 0)
		return true;
	else
		return false;
}

void PrintBoard(Board posicion[][NUM_COLUMNS], int filas, int columnas)
{
	for (int i = 0; i<columnas; i++)
	{
		for (int j = 0; j < filas; j++)
		{
			if (posicion[i][j].Position.coins)
				std::cout << 'C  ';
			else if (posicion[i][j].Position.stone)
				std::cout << 'S  ';
			else 
				std::cout << '0  ';

		}
		std::cout << std::endl;
	}
		
}
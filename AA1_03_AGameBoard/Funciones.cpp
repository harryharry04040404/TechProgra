#pragma once
#include "header.h"

int RandomBetween(int min, int max) {

	int result;

	result = rand() % (max - min + 1) + min;

	return result;
}

void InitializeBoard(Board board[][NUM_COLUMNS]) {

	for (int i = 0; i < NUM_COLUMNS - 1; i++) 
	{
		for (int j = 0; j < NUM_ROWS - 1; j++) 
		{

			board[i][j].stones = RandomBetween(0, 0.2 * NUM_ROWS * NUM_COLUMNS);

			board[i][j].numberOfCoins = RandomBetween(0, 0.3 * NUM_ROWS * NUM_COLUMNS);

			//for (int i = 0; i < board.coins.numberOfCoins; i++) {}

			board[i][j].position.x = RandomBetween(0, (NUM_ROWS - 1) * (NUM_COLUMNS - 1));

			board[i][j].position.y = RandomBetween(0, (NUM_ROWS - 1) * (NUM_COLUMNS - 1));

			board[i][j].player.x = RandomBetween(0, (NUM_ROWS - 1) * (NUM_COLUMNS - 1));

			board[i][j].player.y = RandomBetween(0, (NUM_ROWS - 1) * (NUM_COLUMNS - 1));
		}
	}
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

	if (ExistsCoin) {

		player.score += 1;
	}
}

void SetPos(Player& player, Movement movementType) {


	if (CheckMovement(player, movementType)) 
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

		if ((player.x + 1 == board.position.coins) && (player.y == board.position.coins)) {
			board.numberOfCoins -= 1;
			return true;
		}
		else {

			return false;
		}
		break;

	case DOWN:

		if ((player.x - 1 == board.position.coins) && (player.y == board.position.coins)) {
			board.numberOfCoins -= 1;
			return true;
		}
		else {

			return false;
		}
		break;

	case LEFT:

		if ((player.y - 1 == board.position.coins) && (player.x == board.position.coins)) {
			board.numberOfCoins -= 1;
			return true;
		}
		else {

			return false;
		}
		break;

	case RIGHT:

		if ((player.y + 1 == board.position.coins) && (player.x == board.position.coins)) {
			 board.numberOfCoins -= 1;
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
			if (posicion[i][j].position.coins)
				std::cout << 'C  ';
			else if (posicion[i][j].position.stone)
				std::cout << 'S  ';
			else 
				std::cout << '0  ';

		}
		std::cout << std::endl;
	}
		
}
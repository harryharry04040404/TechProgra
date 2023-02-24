#pragma once
#include "header.h"

int RandomBetween(int min, int max) {

	int result;

	result = rand() % (max - min + 1) + min;

	return result;
}

void InitializeBoard(Board board[][NUM_COLUMNS]) {

	board[NUM_ROWS][NUM_COLUMNS].stone = RandomBetween(0, 0.2 * NUM_ROWS * NUM_COLUMNS);

	int numberOfStones = board[NUM_ROWS][NUM_COLUMNS].stone;

	board[NUM_ROWS][NUM_COLUMNS].coin = RandomBetween(0, 0.3 * NUM_ROWS * NUM_COLUMNS);

	int numberOfCoins = board[NUM_ROWS][NUM_COLUMNS].coin;

	board[NUM_ROWS][NUM_COLUMNS].player.position.x = RandomBetween(0, (NUM_ROWS - 1) * (NUM_COLUMNS - 1));

	board[NUM_ROWS][NUM_COLUMNS].player.position.y = RandomBetween(0, (NUM_ROWS - 1) * (NUM_COLUMNS - 1));
}

bool CheckMovement(Player& player, Movement movementType) 
{
	if ((player.position.x != 0) && (player.position.x != (NUM_ROWS-1)) && (player.position.y != 0) && (player.position.y != (NUM_COLUMNS-1)))
	{
		return true;
	}
	else
	{
		switch (movementType) 
		{

		case UP:
			if (player.position.x != 0) 
			{
				return true;
			}
			else 
			{
				return false;
			}
			break;

		case DOWN:
			if (player.position.x != NUM_ROWS-1) 
			{
				return true;
			}
			else 
			{
				return false;
			}
			break;

		case LEFT:
			if (player.position.y != 0)
			{
				return true;
			}
			else 
			{
				return false;
			}
			break;

		case RIGHT:
			if (player.position.y != NUM_COLUMNS-1)
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

void AddScore(Movement movementType, Player& player, Board board, Position& position) {

	if (ExistsCoin(position)) {

		player.score += 1;
	}
}

void SetPos(Player& player, Movement movementType) {


	if (CheckMovement(player, movementType)) 
	{

		switch (movementType) 
		{

		case UP:

			player.position.x -= 1;
			break;

		case DOWN:

			player.position.x += 1;
			break;

		case LEFT:

			player.position.y -= 1;
			break;

		case RIGHT:

			player.position.y += 1;
			break;
		}
	}
	else
	{
			std::cout << "error input movement type" << std::endl;
	}
}

bool ExistsCoin(Position& position) {

	if (position.hasCoin) 
	{
		return true;
	}
	else {

		return false;
	}
}

void MovePlayer(Player& player, Movement movementType)
{
	if (CheckMovement(player, movementType))
	{

		switch (movementType)
		{

		case UP:

			player.position.x -= 1;
			break;

		case DOWN:

			player.position.x += 1;
			break;

		case LEFT:

			player.position.y -= 1;
			break;

		case RIGHT:

			player.position.y += 1;
			break;
		}
	}
}

bool GameOver(Board board[][NUM_COLUMNS]) 
{
	if (board[NUM_ROWS][NUM_COLUMNS].coin == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void PrintBoard(Board position[][NUM_COLUMNS])
{
	for (int i = 0; i<NUM_COLUMNS; i++)
	{
		for (int j = 0; j < NUM_ROWS; j++)
		{
			if (position[i][j].position.hasCoin)
				std::cout << 'C  ';
			else if (position[i][j].position.hasStone)
				std::cout << 'S  ';
			else 
				std::cout << '  ';
		}
		std::cout << std::endl;
	}
}
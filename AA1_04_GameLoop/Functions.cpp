#pragma once
#include "Functions.h"

bool CheckMovement(Player& player, Movement movementType, Board posicion[][NUM_COLUMNS])
{
	bool result = false;

	switch (movementType)
	{

	case UP:
		if (player.x != 0 || !posicion[player.x - 1][player.y].hasStone)
		{
			result = true;
		}
		else
		{
			result = false;
		}
		break;

	case DOWN:
		if (player.x != NUM_ROWS - 1 || !posicion[player.x + 1][player.y].hasStone)
		{
			result = true;
		}
		else
		{
			result = false;
		}
		break;

	case LEFT:
		if (player.y != 0 || !posicion[player.x][player.y - 1].hasStone)
		{
			result = true;
		}
		else
		{
			result = false;
		}
		break;

	case RIGHT:
		if (player.y != NUM_COLUMNS - 1 || !posicion[player.x][player.y + 1].hasStone)
		{
			result = true;
		}
		else
		{
			result = false;
		}
		break;
	}

	return result;
}


void AddScore(Movement movementType, Player& player, Board position[][NUM_COLUMNS])
{

	if (ExistsCoin(player, position, movementType))
	{
		player.score += 1;
		position[player.x][player.y].hasCoin = false;
	}
}

void SetPos(Player& player, Movement movementType, Board posicion[][NUM_COLUMNS]) {


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
		std::cout << std::endl << "Invalid INPUT" << std::endl;
		break;
	}

}


bool GameOver(Board posicion[NUM_ROWS][NUM_COLUMNS])
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

void PrintBoard(Board posicion[][NUM_COLUMNS], Player jugador)
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
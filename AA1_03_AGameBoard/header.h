#pragma once
#include <iostream>
#define NUM_ROWS 5
#define NUM_COLUMNS 5

enum Movement {	UP, DOWN, LEFT, RIGHT};

struct Board {

	int stones;
	Coin coins;
	Player player;
}; 

struct Player {

	int x;
	int y;
	int score;
};

struct Coin {

	int x;
	int y;
	int numberOfCoins;
};

int RandomBetween(int min, int max) {

	int result;
	
	result = rand() % (max - min + 1) + min;

	return result;
}

void InitializeBoard(Board& board) {

	board.stones = RandomBetween(0, 0.2 * NUM_ROWS*NUM_COLUMNS);

	board.coins.numberOfCoins = RandomBetween(0, 0.3 * NUM_ROWS * NUM_COLUMNS);

	//for (int i = 0; i < board.coins.numberOfCoins; i++) {}

		board.coins.x = RandomBetween(0, NUM_ROWS * NUM_COLUMNS);

		board.coins.y = RandomBetween(0, NUM_ROWS * NUM_COLUMNS);
	
	board.player.x = RandomBetween(0, NUM_ROWS * NUM_COLUMNS);

	board.player.y = RandomBetween(0, NUM_ROWS * NUM_COLUMNS);
}

bool CheckMovement(Player player, Movement movementType) {

	if ((player.x != 0)&&(player.x != NUM_ROWS)&&(player.y != 0)&&(player.y != NUM_COLUMNS)) {
		
		return true;
	}
	else {

		switch (movementType) {

		case UP: 
			if (player.x != 0) {

				return true;
			}
			else {

				return false;
			}
			break;

		case DOWN:
			if (player.x != NUM_ROWS) {

				return true;
			}
			else {

				return false;
			}
			break;

		case LEFT:
			if (player.y != 0) {

				return true;
			}
			else {

				return false;
			}
			break;

		case RIGHT:
			if (player.y != NUM_COLUMNS) {

				return true;
			}
			else {

				return false;
			}
			break;
		}
	}
}

void AddScore(Movement movementType, Player& player, Board board) {

	bool coin;

	coin = ExistsCoin(movementType, player, board);

	if (coin == true) {

		player.score += 1;
	}
}

void SetPos(Player& player, Movement movementType) {

	bool position;

	position = CheckMovement;

	if (position == true) {

		switch (movementType) {

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
	else {

		std::cout << "error input movement type" << std::endl;
	}
}

bool ExistsCoin(Movement movementType, Player player, Board board) {

	switch (movementType) {

	case UP:

		if ((player.x + 1 == board.coins.x)&&(player.y == board.coins.y)) {

			return true, board.coins.numberOfCoins -= 1;
		}
		else {

			return false;
		}
		break;

	case DOWN:

		if ((player.x - 1 == board.coins.x)&&(player.y == board.coins.y)) {

			return true, board.coins.numberOfCoins -= 1;
		}
		else {

			return false;
		}
		break;

	case LEFT:

		if ((player.y - 1 == board.coins.y)&&(player.x == board.coins.x)) {

			return true, board.coins.numberOfCoins -= 1;
		}
		else {

			return false;
		}
		break;

	case RIGHT:

		if ((player.y + 1 == board.coins.y)&&(player.x == board.coins.x)) {

			return true, board.coins.numberOfCoins -= 1;
		}
		else {

			return false;
		}
		break;
	}
}

void MovePlayer() {


}

bool GameOver() {


}

void PrintBoard() {


}
#pragma once
#include <iostream>
#define NUM_ROWS 5
#define NUM_COLUMNS 5

enum Movement {	UP, DOWN, LEFT, RIGHT};

struct Board {


}; 

Board board [NUM_ROWS] [NUM_COLUMNS];

struct Player {

	int x;
	int y;
	int score;
};

int RandomBetween(int min, int max) {

}

void InitializeBoard() {

	RandomBetween(0, 0.2 * NUM_ROWS*NUM_COLUMNS);

	RandomBetween(0, 0.3 * NUM_ROWS * NUM_COLUMNS);

	RandomBetween(0, NUM_ROWS * NUM_COLUMNS);

	RandomBetween(0, NUM_ROWS * NUM_COLUMNS);
}

bool CheckMovement(int x, int y, Movement movementType) {


}

void AddScore(Player player) {


}

void SetPos() {


}

bool ExistsCoin() {


}

void MovePlayer() {


}

bool GameOver() {


}

void PrintBoard() {


}
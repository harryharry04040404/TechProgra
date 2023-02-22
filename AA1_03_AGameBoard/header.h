#pragma once
#include <iostream>
#define NUM_ROWS 5
#define NUM_COLUMNS 5

enum Movement {	UP, DOWN, LEFT, RIGHT};

struct Player
{
	int x;
	int y;
	int score;
};

struct Coin
{
	int x;
	int y;
	int numberOfCoins;
};

struct Board
{
	int stones;
	Coin coins;
	Player player;

}; 

//Random
int RandomBetween(int min, int max);

void InitializeBoard(Board& board);
bool CheckMovement(Player player, Movement movementType);
void AddScore(Movement movementType, Player& player, Board board);
void SetPos(Player& player, Movement movementType);
bool ExistsCoin(Movement movementType, Player player, Board board);
void MovePlayer();
bool GameOver();
void PrintBoard();
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

struct Position
{
	int x;
	int y;
	bool coins;
	bool stone;
};

struct Board
{
	int stones;
	int numberOfCoins;
	Player player;
	Position position;

}; 

//Random
int RandomBetween(int min, int max);

void InitializeBoard(Board board [][NUM_COLUMNS]);
bool CheckMovement(Player& player, Movement movementType);
void AddScore(Movement movementType, Player& player, Board board);
void SetPos(Player& player, Movement movementType);
bool ExistsCoin(Movement movementType, Player player, Board board);
void MovePlayer();
bool GameOver(Board& board);
void PrintBoard(Board posicion[][NUM_COLUMNS], int filas, int columnas);
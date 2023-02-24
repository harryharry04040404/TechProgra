#pragma once
#include <iostream>
#define NUM_ROWS 5
#define NUM_COLUMNS 5

enum Movement {	UP, DOWN, LEFT, RIGHT};

struct Player
{
	Position position;
	int score;
};

struct Position
{
	int x;
	int y;
	bool hasCoin;
	bool hasStone;
};

struct Board
{
	int stone;
	int coin;
	Player player;
	Position position;

}; 

//Random
int RandomBetween(int min, int max);

void InitializeBoard(Board board [][NUM_COLUMNS]);
bool CheckMovement(Player& player, Movement movementType);
void AddScore(Movement movementType, Player& player, Board board, Position& position);
void SetPos(Player& player, Movement movementType);
bool ExistsCoin(Position& position);
void MovePlayer(Player& player, Movement movementType);
bool GameOver(Board board[][NUM_COLUMNS]);
void PrintBoard(Board posicion[][NUM_COLUMNS]);

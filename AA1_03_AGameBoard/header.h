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
	bool hasCoin;
	bool hasStone;
};



//Random
int RandomBetween(int min, int max);

void InitializeBoard(int& piedras, int& monedas, Player& jugador, Position posicion[][NUM_COLUMNS]);
bool CheckMovement(Player& player, Movement movementType, Position posicion[][NUM_COLUMNS]);
void AddScore(Movement movementType, Player& player, Position position[][NUM_COLUMNS]);
void SetPos(Player& player, Movement movementType, Position posicion[][NUM_COLUMNS]);
bool ExistsCoin(Player jugador, Position posicion[][NUM_COLUMNS], Movement movementType);
Movement MovePlayer();
bool GameOver(Position posicion[NUM_ROWS][NUM_COLUMNS]);
void PrintBoard(Position posicion[][NUM_COLUMNS], Player jugador);

#pragma once
#include <iostream>
#include <Windows.h>
#include "Board.h"
#include "Constants.h"
#include "Player.h"
#include "Types.h"

//Random
int RandomBetween(int min, int max);


bool CheckMovement(Player& player, Movement movementType, Board posicion[][NUM_COLUMNS]);
void AddScore(Movement movementType, Player& player, Board position[][NUM_COLUMNS]);
void SetPos(Player& player, Movement movementType, Board posicion[][NUM_COLUMNS]);

Movement MovePlayer();
bool GameOver(Board posicion[NUM_ROWS][NUM_COLUMNS]);
void PrintBoard(Board posicion[][NUM_COLUMNS], Player jugador);

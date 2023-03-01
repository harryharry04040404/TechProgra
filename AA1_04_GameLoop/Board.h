#pragma once
#include "Constants.h"
#include "Types.h"
#include "Player.h"
#include <stdlib.h>

struct Board
{
	bool m_hasCoin;
	bool m_hasStone;

	void InitializeBoard(int& piedras, int& monedas, Player& jugador, Board posicion[][NUM_COLUMNS]);
	bool ExistsCoin(Board posicion[][NUM_COLUMNS], Movement movementType);

};
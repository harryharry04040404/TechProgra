#include "Board.h"


bool Board::ExistsCoin(Board posicion[][NUM_COLUMNS], Movement movementType) {

	bool result = false;

	switch (movementType)
	{
	case Movement::UP:
	case Movement::DOWN:
	case Movement::LEFT:
	case Movement::RIGHT:

		for (int i = 0; i < NUM_ROWS; i++)
		{
			for (int j = 0; j < NUM_COLUMNS; j++)
			{
				if (posicion[i][j].m_hasCoin)
				{
					result = true;
				}
				else
				{
					result = false;
				}
			}
		}
		break;
	}
	return result;
}

int RandomBetween(int min, int max) {

	int result;

	result = rand() % (max - min + 1) + min;

	return result;
}

void Board::InitializeBoard(int& piedras, int& monedas, Player& jugador, Board posicion[][NUM_COLUMNS]) {

	piedras = RandomBetween(0, (0.2 * NUM_ROWS * NUM_COLUMNS));

	monedas = RandomBetween(1, (0.3 * NUM_ROWS * NUM_COLUMNS));


	for (int i = 0; i < piedras; i++)
	{
		int x = RandomBetween(0, NUM_ROWS - 1);
		int y = RandomBetween(0, NUM_COLUMNS);

		if (posicion[x][y].m_hasStone == true)
			i--;
		else
			posicion[x][y].m_hasStone = true;
	}

	for (int j = 0; j < monedas; j++)
	{
		int x = RandomBetween(0, NUM_ROWS - 1);
		int y = RandomBetween(0, NUM_COLUMNS);

		if (posicion[x][y].m_hasCoin == true || posicion[x][y].m_hasStone == true)
			j--;
		else
			posicion[x][y].m_hasCoin = true;
	}


	do {
		jugador.x = RandomBetween(0, (NUM_ROWS - 1) * (NUM_COLUMNS - 1));
		jugador.y = RandomBetween(0, (NUM_ROWS - 1) * (NUM_COLUMNS - 1));
	} while (posicion[jugador.x][jugador.y].m_hasCoin || posicion[jugador.x][jugador.y].m_hasStone);

}
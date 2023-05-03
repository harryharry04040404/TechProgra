#include "Room.h"

Room::Room(int numRows, int numColumns, int numEnemies)
{
	m_numRows = numRows;

	m_numColumns = numColumns;

	m_numEnemies = numEnemies;
}

int Room::ReadConfigTxt()
{
	int aux, numRows = 0, numColumns = 0, numEnemies = 0, parameter = 0;

	std::ifstream myFile("config.txt");
	if (myFile.is_open())
	{
		while (!';' && myFile >> aux)
		{
			switch (parameter)
			{
			case 0:
				numRows = aux;
				aux = 0;
				parameter++;
				break;

			case 1:
				numColumns = aux;
				aux = 0;
				parameter++;
				break;

			case 2:
				numEnemies = aux;
				aux = 0;
				parameter = 0;
				break;

			default:
				break;
			}
		}
		myFile.close();
	}
	else
	{
		std::cout << "Unable to open file";
	}

	int** mapSize;

	mapSize = new int* [numRows];

	for (int i = 0; i < numRows; i++)
	{
		mapSize[i] = new int[numColumns];
	}

	return numEnemies;
}

void Room::PrintRoom()
{
	for (int i = 0; i < m_numRows; i++)
	{
		for (int j = 0; j < m_numColumns; j++)
		{
			if (i == 0 || i == m_numRows - 1 || j == 0 || j == m_numColumns - 1)
			{
				if (j == m_numColumns / 2)
				{
					std::cout << "P ";
				}
				else
				{
					std::cout << "X ";
				}
			}
			else if (i == Player::m_posX && j == Player::m_posY)
			{
				std::cout << "< "
			}
			else
			{
				std::cout << "  ";
			}
		}
		std::cout << std::endl;
	}
	
	//print enemies	
}

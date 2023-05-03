#pragma once
#include <iostream>
#include <fstream>
#include "Player.h"

class Room
{
public:
	int m_numRows;
	int m_numColumns;
	int m_numEnemies;

	Room(int numRows, int numColumns, int numEnemies);

	int ReadConfigTxt();
	
	void PrintRoom();
};

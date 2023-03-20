#include <iostream>

enum class CellType
{
	EMPTY,
	ENEMY,
	PLAYER,
	COUNT
};

struct Cell
{
	CellType type;



};

struct Map
{
	int m_numRows = 0;
	int m_numColumns = 0;
	Cell** m_map = nullptr;

	//Constructors & destructors
	//Map() {}
	Map(int numRows, int numColumns)
	{
		std::cout << "constructor called" << std::endl;
		m_numRows = numRows;
		m_numColumns = numColumns; 
	}

	~Map()
	{

	}
	//Getters / Setters
	//Other Methods

};
int main()
{
	Map myMap (5, 10);

	

}
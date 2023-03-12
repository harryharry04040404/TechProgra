#include <iostream>
/*

//Define Vs Const

#define MY_DEF_A 1.5
#define MY_DEF_B 20

const float A = 1.5;
const uint16_t B = 20;

#define DEBUG_MODE

int main()
{
	//Preprocesador -> (Write code) -> Compiler  -> Execute

	int result = MY_DEF_A * MY_DEF_B;

#ifdef DEBUG_MODE
	std::cout << "Counting elfs, checking that the program has been correctly created" << std::endl; 

#else
	int numElfs = 5;
	int* elfs = new arrayElfs[numElfs];
	//GAME LOOP

#endif // DEBUG_MODE
}


//Casting

//Operators Overloading

enum class EnemyType
{
	SORCERER,
	WARRIOR,
	MERGED,
	COUNT
};
struct Enemy
{
	std::string m_name;
	EnemyType m_type;
	const int MAX_HEALTH = 1000;

	int m_health = MAX_HEALTH;

	Enemy operator+(const Enemy& enemy)
	{
		Enemy e;
		e.m_type = EnemyType::MERGED;
		e.m_health = m_health + enemy.m_health;
	}
	
	bool operator>(const Enemy& enemy)
	{
		return m_health > enemy.m_health;
	}
};

int main()
{
	Enemy e1;

	Enemy e2;

	Enemy fusion = e1 + e2;
	bool moreHealth = e1 > e2;
}
*/
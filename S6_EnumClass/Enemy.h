#pragma once
#include <iostream>

enum class EnemyType
{
	WARRIOR,
	SORCERER,
	HOBBIT,
	COUNT //std::vcetor<int> enemyDefenses (static_cast<int>(EnemyType::COUNT))
};

struct Enemy
{
	//Members
	const int MAX_HEALTH = 1000;
	int m_health = MAX_HEALTH; //m_ means member declarated inside a struct
	EnemyType enemyType;

	//Methods
	void ReceiveDamage(int damageAmount);
	void PrintHealth();
};


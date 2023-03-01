#include "Enemy.h"

void Enemy::ReceiveDamage(int damageAmount)
{
	m_health -= damageAmount;
	if (m_health < 0)
	{
		m_health = 0;
	}
}

void Enemy::PrintHealth()
{
	std::cout << "My health is:" << m_health << std::endl;
}
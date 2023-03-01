#include "header.h"
#include "Enemy.h"


int main() 
{
	Weapon weapon = Weapon::BOW;
	Outfit outfit = Outfit::BOW;

	int outfitInt = static_cast<int>(outfit);
	int weaponInt = static_cast<int>(weapon);

	if (outfitInt == weaponInt) 
	{
		std::cout << "Correct!\n" << std::endl;
	}

	Enemy e;
	//e.m_health -= 30; //struct's members and methods are publib by default // to be continued

	e.PrintHealth();
	e.ReceiveDamage(10);
	e.PrintHealth();
}
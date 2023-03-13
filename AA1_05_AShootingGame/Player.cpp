//
// Created by JordiPlanas & JaumeLatorre on 08/03/2023.
//

#include "Player.h"

int randBetween(int min, int max)
{
	int result = 0;
	result = rand() % (max - min + 1) + min;
	return result;
}

//TODO
void Player::init(std::string name, int position){
	
	std::cout << "input your name:" << std::endl;

	std::cin >> name;

	position = 0;

	score = 0;

	for (int i = 0; i < numBalls; i++)
	{
		int colorBall; 

		colorBall = randBetween(1, 5);
		
		switch (colorBall)
		{
		case 1:
			gun[i] = RED;
			break;
		case 2:
			gun[i] = GREEN;
			break;
		case 3:
			gun[i] = BLUE;
			break;
		case 4:
			gun[i] = YELLOW;
			break;
		case 5: 
			gun[i] = ORANGE;
			break;
		default:
			continue;
		}
	}
}

//TODO
Ball shoot()
{


	//return 
}
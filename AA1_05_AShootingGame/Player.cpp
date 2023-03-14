//
// Created by JordiPlanas & JaumeLatorre on 08/03/2023.
//

#include "Player.h"


void Player::init(std::string name, int position){

    this -> name = name;
    this -> position = position;
    score = 0;

    for (int i = 0; i < MAX_NUM_BALLS; i++)
    {
        int colorBall;
        colorBall = randomNumber(1, 5);
        switch (colorBall)
        {
            case 1:
                gun[i] = Ball::GREEN;
                break;
            case 2:
                gun[i] = Ball::RED;
                break;
            case 3:
                gun[i] = Ball::BLUE;
                break;
            case 4:
                gun[i] = Ball::YELLOW;
                break;
            case 5:
                gun[i] = Ball::ORANGE;
                break;
            default:
                continue;
        }
    }
}

Ball Player::shoot(){
    Ball bolaLanzada = gun[0];
    if (remainingBalls > 1){
        for (int i = 0; i < remainingBalls-1; i++){
            gun[i] = gun[i+1];
        }
    }
    remainingBalls--;
    return bolaLanzada;
}
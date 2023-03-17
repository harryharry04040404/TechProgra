//
// Created by JordiPlanas & JaumeLatorre on 08/03/2023.
//
#include "Ball.h"

void printBall(Ball ball){
    std::cout << "[";
    switch (ball){
        case Ball::GREEN:
            std::cout << "G";
            break;
        case Ball::RED:
            std::cout << "R";
            break;
        case Ball::BLUE:
            std::cout << "B";
            break;
        case Ball::YELLOW:
            std::cout << "Y";
            break;
        case Ball::ORANGE:
            std::cout << "O";
            break;
    }
    std::cout << "]";
}

Ball randomBall(){
    int num = randomNumber(1, 5);//Ball::SIZE

    switch (num)
    {
        case 1:
            return Ball::GREEN;
            break;
        case 2:
            return Ball::RED;
            break;
        case 3:
            return Ball::BLUE;
            break;
        case 4:
            return Ball::YELLOW;
            break;
        case 5:
            return Ball::ORANGE;
            break;
        default:
            return Ball::SIZE;
            break;
    }
}

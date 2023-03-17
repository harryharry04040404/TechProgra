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
        gun[i] = randomBall();
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

void Player::printStats(){
    std::cout << "Nombre: " << name
    << std::endl << "Score: " << score
    << std::endl;
}

void Player::printGun() {
    std::cout << "Bolas del jugador:" << std::endl;
    for (int i = 0; i < remainingBalls; i++) {
        printBall(gun[i]);
    }
    std::cout << std::endl;
}

int askPosition(int max){
    int num;
    std::cout << "Donde lanzas la bola? (max: " << max << ")" << std::endl;
    std::cin >> num;
    while (num < 0 || num > max){
        std::cout << "Introduce un valor adecuado.\nDonde lanzas la bola? (max: " << max << ")" << std::endl;
        std::cin >> num;
    }
    return num;
}

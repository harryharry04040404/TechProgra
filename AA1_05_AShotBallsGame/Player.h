//
// Created by JordiPlanas & JaumeLatorre on 08/03/2023.
//
#include "Panel.h"
#include <string>

struct Player {
    const int MAX_NUM_BALLS = 20;

    std::string name;
    int position;
    int score;
    int remainingBalls = MAX_NUM_BALLS;
    Ball* gun = new Ball[MAX_NUM_BALLS];

    void init(std::string name, int position);
    Ball shoot();
    void printStats();
    void printGun();
};

int askPosition(int max);

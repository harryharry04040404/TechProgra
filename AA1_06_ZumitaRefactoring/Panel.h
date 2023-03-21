//
// Created by JordiPlanas & JaumeLatorre on 08/03/2023.
//
#include "Ball.h"

struct Panel{

    Ball *panel;
    int size;
    Panel(){
    }

    void init();
    void insert(int position, Ball ball);
    int verifier(int position, Ball ball);
    void deleteThree(int position);
    void insertThree();
    void printPanelBalls();
    void changePanelSize(int number);
};

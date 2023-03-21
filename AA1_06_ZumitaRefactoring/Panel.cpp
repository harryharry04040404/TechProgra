//
// Created by JordiPlanas & JaumeLatorre on 08/03/2023.
//

#include "Panel.h"

void Panel::init(){

    // Cantidad de Bolas:
    std::cout << "Introduce la cantidad de bolas que contendra el panel:" << std::endl;
    int number;
    std::cin >> number;
    while (number <= 0){
        std::cout << "Introduce una cantidad adecuada (mayor que 0):" << std::endl;
        std::cin >> number;
    }
    std::cout << "La cantidad introducida es adecuada." << std::endl;
    size = number;

    panel = new Ball[size];
    for (int i = 0; i < size; i++){
        panel[i] = randomBall();
        if (i >= 2 && verifier(i, panel[i]) != -1){
            i--;
        }

    }
}

void Panel::insert(int position, Ball ball){

    std::vector <int>::iterator it;
    
    it  position;
    
    panel.insert();
}

int Panel::verifier(int position, Ball ball){
    if (position >= 0 && position < size-1){
        // Position == middle
        if (position > 0 && position < size-2){
            if (panel[position] == ball &&
                panel[position-1] == ball &&
                panel[position+1] == ball)
            {
                return position-1;
            }
            if (position > 1){
                if (panel[position-2] == ball &&
                    panel[position-1] == ball &&
                    panel[position] == ball)
                {
                    return position-2;
                }
            }
            if (position < size-3){
                if (panel[position+2] == ball &&
                    panel[position+1] == ball &&
                    panel[position] == ball)
                {
                    return position;
                }
            }
        // Position == first
        } else if (position == 0){
            if (panel[position+2] == ball &&
                panel[position+1] == ball &&
                panel[position] == ball)
            {
                return position;
            }
        // Position == last
        } else if (position == size-1){
            if (panel[position-2] == ball &&
                panel[position-1] == ball &&
                panel[position] == ball)
            {
                return position-2;
            }
        }
    }
    return -1;
}

void Panel::deleteThree(int position){
    Ball *newPanel = new Ball[size-3];

    for (int i = 0; i < position; i++){
        newPanel[i] = panel[i];
    }
    for (int i = position+3; i < size; i++){
        newPanel[i-3] = panel[i];
    }

    delete[] panel;
    panel = newPanel;
    size -= 3;
}

void Panel::insertThree(){
    Ball randomBallSaved;
    for (int i = 0; i < 3; i++)
    {
        randomBallSaved = randomBall();
        if (verifier(size, randomBallSaved) != -1){
            i--;
        } else {
            panel.insert(size, randomBallSaved);
        }

    }
}

void Panel::printPanelBalls(){
    std::cout << "Bolas en el panel:" << std::endl;
    for (int i = 0; i < size; i++){
        printBall(panel[i]);
    }
    std::cout << std::endl;
}

void Panel::changePanelSize(int number){
    Ball *newPanel = new Ball[size+number];
    for (int i = 0; i < size; i++){
        newPanel[i] = panel[i];
    }
    delete[] panel;
    panel = newPanel;
    size += number;
}

//
// Created by JordiPlanas & JaumeLatorre on 08/03/2023.
//

#include "Panel.h"

void Panel::init(){

    // Cantidad de Bolas:
    std::cout << "Introduce la cantidad de bolas que contendrá el panel:" << std::endl;
    int number;
    std::cin >> number;
    while (number <= 0){
        std::cout << "Introduce una cantidad adecuada (<0):" << std::endl;
        std::cin >> number;
    }
    std::cout << "La cantidad introducida es adecuada." << std::endl;
    size = randomNumber(1, number);

    // Ball *panel;
    panel = new Ball[size];
}

void Panel::insert(int position, Ball ball){

    Ball *newPanel = new Ball[size+1];
    std::copy(panel, panel + size++, newPanel);
    delete[] panel;
    panel = newPanel;

    for (int i = size-1; i > position; i--){
        panel[i] = panel[i-1];
    }
    panel[position] = ball;
}

int Panel::verifier(int position, Ball ball){
    if (position >= 0 && position < sizeof(panel)-1){
        // Position == middle
        if (position > 0 && position < sizeof(panel)-2){
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
            if (position < sizeof(panel)-3){
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
        } else if (position == sizeof(panel)-1){
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

//TODO
void Panel::deleteThree(int position){

}

//TODO
void Panel::insertThree(){

}

//TODO
void Panel::printBalls(){

}
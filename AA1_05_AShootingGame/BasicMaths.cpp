//
// Created by JordiPlanasMartinez on 09/03/2023.
//

#include "BasicMaths.h"

int randomNumber(int min, int max){
    return rand() % (max - min + 1) + min;
}
//
// Created by JordiPlanas & JaumeLatorre on 08/03/2023.
//
#include "Ball.h"
#include <string>
#include <iostream>

// 2. Implementar un struct Player. La implementación debe incluir:
struct Player {
    /* a.
     * Todos los miembros (atributos) necesarios para mantener la información de un jugador. Es especialmente
     * importante pensar en cómo se representa a la pistola.
     */
    std::string name;

    int position;

    int score;

    int const maxBalls = 20; //I think const and not define (Can be discussed tho)

    int numBalls = maxBalls;

    int* gun = new int [numBalls];

    /* b.
     * Un método void init(std::string name, int position), que inicializa al jugador poniéndole
     * como su identificador a name y colocándolo en la position dada, inicializa el score en 0 y carga a la
     * pistola con 20 bolas aleatorias.
     */
    void init(std::string name, int position);

    /* c.
     * Un método Ball shoot(): Dispara 1 bola, la primera que tiene. La bola se elimina del cargador y la
     * función la devuelve.
     */
    Ball shoot();
};

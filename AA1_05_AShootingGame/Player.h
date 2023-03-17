//
// Created by JordiPlanas & JaumeLatorre on 08/03/2023.
//
#include "Panel.h"
#include <string>

// 2. Implementar un struct Player. La implementación debe incluir:
struct Player {
    /* a.
     * Todos los miembros (atributos) necesarios para mantener la información de un jugador. Es especialmente
     * importante pensar en cómo se representa a la pistola.
     */
    const int MAX_NUM_BALLS = 20;

    std::string name;
    int position;
    int score;
    int remainingBalls = MAX_NUM_BALLS;
    Ball* gun = new Ball[MAX_NUM_BALLS];

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

    void printStats();
    void printGun();
};

int askPosition(int max);

//
// Created by JordiPlanas & JaumeLatorre on 08/03/2023.
//
#include "Ball.h"

// 3. Implementar el struct Panel. La implementación debe incluir:
struct Panel{
    /* a.
     * Atributos(campos)
     * Ball *panel;
     * int size; //representa en todo momento el tamaño del panel
     */
    Ball *panel;
    int size;
    Panel(){
    }

    /* b.
     * El método void init(): Inicializa al panel con un número aleatorio de bolas aleatorias que es leído
     * del estándar input.
     */
    void init();

    /* c.
     * El método void insert(int position, Ball ball): Inserta la bola ball en el panel de bolas
     * en la posición indicada. La inserción la realiza desplazando a derecha las bolas.
     */
    void insert(int position, Ball ball);

    /* d.
     * El metodo int verifier(int position, Ball ball): Verifica si alrededor de la position
     * hay una secuencia de 3 bolas consecutivas iguales a ball. Debe retornar un valor que indique dónde está
     * la primera bola de las 3, en caso de existir 3. Si no hay 3 consecutivas, el valor de retorno lo debe indicar
     * de alguna manera.
     */
    int verifier(int position, Ball ball);

    /* e.
     * El método void deleteThree(int position): Elimina 3 bolas consecutivas del panel a partir de la
     * position dada.
     */
    void deleteThree(int position);

    /* f.
     * El método void insertThree(): Inserta 3 bolas aleatorias en el panel por el final.
     */
    void insertThree();

    /* g.
     * Un método que imprima las bolas que hay en el panel.
     */
    void printPanelBalls();

    void changePanelSize(int number);
};

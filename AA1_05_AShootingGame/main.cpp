#include "Player.h"

#define LOOP_MODE

int main() {
    srand(time(NULL));
    #ifdef LOOP_MODE

    bool inGame = true;
    Ball bolaLanzada;
    int positionThrow;
    int positionFound;

    Panel panel;
    panel.init();

    Player player;
    std::string playerName;
    std::cout << "Introduce el nombre del jugador:\n";
    std::cin >> playerName;
    player.init(playerName, 0);

    while (inGame){

        player.printStats();
        player.printGun();
        std::cout << std::endl;
        panel.printPanelBalls();

        positionThrow = askPosition(panel.size);
        bolaLanzada = player.shoot();
        panel.insert(positionThrow, bolaLanzada);

        positionFound = panel.verifier(positionThrow, bolaLanzada);
        if (positionFound != -1){
            panel.deleteThree(positionFound);
            panel.insertThree();
        }

        if (player.remainingBalls == 0){
            inGame = false;
        }
        
        system("CLS");
    }

    #endif
    return 0;
}



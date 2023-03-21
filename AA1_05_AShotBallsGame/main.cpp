#include "Player.h"

#define LOOP_MODE

int main() {
    srand(time(NULL));
    #ifdef LOOP_MODE

    bool inGame = true;
    Ball ballThrown;
    int positionThrow;
    int positionFound;

    Panel gamePanel;
    gamePanel.init();

    Player player;
    std::string playerName;
    std::cout << "Introduce el nombre del jugador:\n";
    std::cin >> playerName;
    player.init(playerName, 0);

    system("CLS");

    while (inGame){

        player.printStats();
        player.printGun();
        std::cout << std::endl;
        gamePanel.printPanelBalls();

        positionThrow = askPosition(gamePanel.size);
        ballThrown = player.shoot();
        gamePanel.insert(positionThrow, ballThrown);

        positionFound = gamePanel.verifier(positionThrow, ballThrown);
        if (positionFound != -1){
            player.score += 1;
            gamePanel.deleteThree(positionFound);
            gamePanel.insertThree();
            while (gamePanel.verifier(gamePanel.size, gamePanel.panel[gamePanel.size - 2]) != -1){
                gamePanel.deleteThree(positionFound);
                gamePanel.insertThree();
            }
        }
        system("CLS");
        if (player.remainingBalls == 0){
            inGame = false;
        }
    }

    player.printStats();
    #endif
    return 0;
}



//
// Created by Petr on 16.11.2021.
//

#include <Game.h>
#include "House.h"


buildings::House::House(Coords coords, std::string name)
        : PopulationBuilding(coords, name, "\U0001F3E2", rand() % 12 + 7) {
    // empty constructor
}

void buildings::House::executeCommand(int command) {
    switch (command) {
        case 0:
            printHelp();
            break;
        case 1:
            printInfo();
            break;
        case 90:
            Game::getInstance()->quitTheBuilding();
            break;
        default:
            break;
    }
}

void buildings::House::printInfo() {
    // TODO Daniil
}

void buildings::House::printHelp() {
    // TODO Daniil
}

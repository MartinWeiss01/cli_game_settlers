
#include "Map.h"

Map::Map(int size) {
    //TODO
    this->m_size = size;
}

int Map::getSize() {
    return this->m_size;
}

std::vector<std::vector<Entity *>> Map::getCells() {
    return this->m_cells;
}


#ifndef ZOOPROJ_EMPTYTERRAIN_H
#define ZOOPROJ_EMPTYTERRAIN_H


#include "Terrain.h"

class EmptyTerrain : protected Terrain {
public:
    EmptyTerrain(int coordX, int coordY);
};


#endif //ZOOPROJ_EMPTYTERRAIN_H
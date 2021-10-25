//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_PLAYER_H
#define BOMBERMANLOGIC_PLAYER_H

#include "Bomb.h"

class Player
{
    private:
        int** playerCoordinate;
        int iPlayer;
        int jPlayer;
    public:

    friend class Bomb;
    friend class Enemies;



};


#endif //BOMBERMANLOGIC_PLAYER_H

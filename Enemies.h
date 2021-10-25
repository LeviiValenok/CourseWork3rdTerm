//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_ENEMIES_H
#define BOMBERMANLOGIC_ENEMIES_H
#include "Player.h"


class Enemies
{
    private:
        int** enemiesCoordinate;
        int iEnemy;
        int jEnemy;
    public:
        Enemies()
        {
            enemiesCoordinate[0][0];
        }
        ~Enemies()
        {
            delete enemiesCoordinate;
        }

        friend class Player;
        friend class Bomb;
};


#endif //BOMBERMANLOGIC_ENEMIES_H

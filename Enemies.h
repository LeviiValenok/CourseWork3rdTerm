
//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_ENEMIES_H
#define BOMBERMANLOGIC_ENEMIES_H
#include <iostream>
#include "Player.h"



class Enemies
        {
private:
    int **enemiesCoordinate;
    int iEnemy;
    int jEnemy;
public:

    friend class Player;
    friend class Bomb;*

    Enemies();
    ~Enemies();

    void collisionWithPlayer(Player player, Enemies enemy);
    //movement

};


#endif //BOMBERMANLOGIC_ENEMIES_H


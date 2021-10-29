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
    friend class Bomb;
    Enemies()
    {
        enemiesCoordinate[0][0];
    }
    ~Enemies()
    {

    }

    void collisionWithPlayer(Player player, Enemies enemy)
    {
        int iPlayer = player.iPlayer;
        int jPlayer = player.jPlayer;
        if (enemy.enemiesCoordinate[iEnemy][jEnemy] == player.playerCoordinate[iPlayer][jPlayer])
        {
            player.health--;
            if (player.health == 0)
            {
                std::cout << "Game is over :( " << std::endl;
            }
        }
    }
    //movement

};


#endif //BOMBERMANLOGIC_ENEMIES_H

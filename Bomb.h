//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_BOMB_H
#define BOMBERMANLOGIC_BOMB_H


#include "Enemies.h"
#include "Map.h"
#include "Player.h"

class Bomb {
private:
    int **bombCoordinate;
    int iBomb;
    int jBomb;
public:
    friend class Player;
    friend class Map;
    friend class Enemies;
//        friend void setBomb(Bomb bomb, Player player);

    //something wrong with class Player. i can't get access to its fields

    void setBomb(Player player)
    {
        int i = player.iPlayer;
        int j = player.jPlayer;
        bombCoordinate[i][j];
    }
    void destroyBlocksAndEnemies(Enemies enemy1, Enemies enemy2, Enemies enemy3, Player player, Map map)
    {
        //TODO: timer???
        //TODO: Change enemy's coordinate to current enemy coordinate
        //TODO: Get current eney coordinate
        int i = player.iPlayer;
        int j = player.jPlayer;
        if (bombCoordinate[iBomb][jBomb] == enemy1.enemiesCoordinate[0][0])
        {
            //destroy an enemy
            player.score++;
        } else if (bombCoordinate[iBomb][jBomb] == enemy2.enemiesCoordinate[0][0])
        {
            //destroy an enemy
            player.score++;
        } else if (bombCoordinate[iBomb][jBomb] == enemy3.enemiesCoordinate[0][0])
        {
            //destroy an enemy
            player.score++;
        }

        if (bombCoordinate[iBomb][jBomb] == 1)
        {
            //destroy block with coordinate [iBomb][jBomb]
            map.mapCoordinate[iBomb][jBomb] = 0;
        }

        if (bombCoordinate[iBomb][jBomb] == player.playerCoordinate[i][j])
        {
            player.health--;
        }

    }



};


#endif //BOMBERMANLOGIC_BOMB_H

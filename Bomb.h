//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_BOMB_H
#define BOMBERMANLOGIC_BOMB_H

#include "Map.h"


class Bomb {
private:
    int **bombCoordinate;
    int iBomb;
    int jBomb;
public:
    friend class Player;
    friend class Map;
    friend class Enemies;

    void setBomb(Player player, Map map)
    {
        iBomb = player.iPlayer;
        jBomb = player.jPlayer;
        bombCoordinate[iBomb][jBomb] = bomb;
        map.mapCoordinate[iBomb][jBomb] = bomb;

    }
    void destroyBlocks(Map& map)
    {
        if (bombCoordinate[iBomb][jBomb] == 1)
        {
            map.mapCoordinate[iBomb][jBomb] = 0;
        }
        else if (bombCoordinate[iBomb + 1][jBomb] == 1)
        {
            map.mapCoordinate[iBomb + 1][jBomb] = 0;
        }
        else if (bombCoordinate[iBomb - 1][jBomb] == 1)
        {
            map.mapCoordinate[iBomb - 1][jBomb] = 0;
        } else if (bombCoordinate[iBomb][jBomb + 1] == 1)
        {
            map.mapCoordinate[iBomb][jBomb + 1] = 0;
        } else if (bombCoordinate[iBomb][jBomb - 1] == 1)
        {
            map.mapCoordinate[iBomb][jBomb - 1] =0;
        }
    }
    void destroyEnemies(Enemies& enemy, Player& player, Map map)
    {
        //TODO: timer???
        //TODO: Change enemy's coordinate to current enemy coordinate
        //TODO: Get current enemy coordinate
        int iEnemyCurrent = enemy.iEnemy;
        int jEnemyCurrent = enemy.jEnemy;
        int enemyCurrentLocation = enemy.enemiesCoordinate[iEnemyCurrent][jEnemyCurrent];
        if (bombCoordinate[iBomb][jBomb] == enemyCurrentLocation ||
            bombCoordinate[iBomb + 1][jBomb] == enemyCurrentLocation ||
            bombCoordinate[iBomb - 1][jBomb] == enemyCurrentLocation ||
            bombCoordinate[iBomb][jBomb + 1] == enemyCurrentLocation ||
            bombCoordinate[iBomb][jBomb - 1] == enemyCurrentLocation)
        {
            //destroy an enemy
            player.score++;
        }
    }

    void killPlayer(Player player, Map map)
    {
        int iPlayerCurrent = player.iPlayer;
        int jPlayerCurrent = player.jPlayer;
        int playerCurrenLocation = player.playerCoordinate[iPlayerCurrent][jPlayerCurrent];
        if (bombCoordinate[iBomb][jBomb] == playerCurrenLocation ||
            bombCoordinate[iBomb + 1][jBomb] == playerCurrenLocation ||
            bombCoordinate[iBomb - 1][jBomb] == playerCurrenLocation ||
            bombCoordinate[iBomb][jBomb + 1] == playerCurrenLocation ||
            bombCoordinate[iBomb][jBomb - 1] == playerCurrenLocation)
        {
            player.health--;
        }

    }



};


#endif //BOMBERMANLOGIC_BOMB_H

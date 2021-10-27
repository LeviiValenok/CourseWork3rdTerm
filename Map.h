//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_MAP_H
#define BOMBERMANLOGIC_MAP_H

#include "Player.h"
#include "Enemies.h"

enum Mark
{
    emptyPath = 0,
    destroyedBlock = 1,
    indestructible = 2,
    bomb = 3,
    player = 4,
    enemy = 5
};



class Map
{
    private:
        int mapSize[6][8] =
            {
                { 0, 0, 0, 0, 1, 1, 0, 0 },
                { 0, 2, 0, 2, 0, 2, 0, 0 },
                { 0, 0, 1, 0, 0, 0, 0, 0 },
                { 0, 2, 0, 2, 0, 2, 0, 0 },
                { 0, 0, 0, 0, 1, 1, 0, 0 },
                { 0, 1, 1, 0, 0, 0, 0, 0 }
            };
        int iMap;
        int jMap;
        int** mapCoordinate;
        friend class Bomb;
        friend class Player;
        friend class Enemies;

        Player& playerLocation(Player& player)
        {
            return player;
        }

        Enemies& enemiesLocation(Enemies& enemy)
        {
            return enemy;
        }



};


#endif //BOMBERMANLOGIC_MAP_H

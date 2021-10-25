//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_BOMB_H
#define BOMBERMANLOGIC_BOMB_H

#include "Enemies.h"
#include "Map.h"


class Bomb
{
    private:
        int** bombCoordinate;
        int iBomb;
        int jBomb;
    public:
        friend class Player;
        friend class Enemies;

        //something wrong with class Player. i can't get access to its fields
        void setBomb(Player player)
        {
            int i, j;

            bombCoordinate[i][j];
        }
        void destroyBlocksAndEnemies(Enemies enemy1, Enemies enemy2, Enemies enemy3, Map map)
        {
            //TODO: timer???
            //TODO: Change enemy's coordinate to current enemy coordinate
            //TODO: Get current eney coordinate
            if (bombCoordinate[iBomb][jBomb] == enemy1.enemiesCoordinate[0][0])
            {
                //destroy an object
            }
            else if (bombCoordinate[iBomb][jBomb] == enemy2.enemiesCoordinate[0][0])
            {
                //destroy an object
            }
            else if (bombCoordinate[iBomb][jBomb] == enemy3.enemiesCoordinate[0][0])
            {
                //destroy an object
            }
        }

};


#endif //BOMBERMANLOGIC_BOMB_H

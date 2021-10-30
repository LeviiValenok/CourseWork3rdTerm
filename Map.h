//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_MAP_H
#define BOMBERMANLOGIC_MAP_H

#include "Player.h"
#include "Enemies.h"
#include <stdio.h>

enum cellType
{
    EemptyPath = 0,
    EdestroyedBlock = 1,
    Eindestructible = 2,
    Ebomb = 3,
    Eplayer = 4,
    Eenemies = 5
};


//add value exit

class Map
{
    private:
        cellType type;
        int table[6][8] =
            {
                { 0, 0, 0, 0, 1, 1, 0, 0 },
                { 0, 2, 0, 2, 0, 2, 0, 0 },
                { 0, 0, 1, 0, 0, 0, 0, 0 },
                { 0, 2, 0, 2, 0, 2, 0, 0 },
                { 0, 0, 0, 0, 1, 1, 0, 0 },
                { 0, 1, 1, 0, 0, 0, 0, 0 }
            };
//        int iMap;
//        int jMap;
        public:
        friend class Bomb;
        friend class Player;
        friend class Enemies;
        Map()
        {

        }
        void setCellValue(int i, int j, int value)
        {
            table[i][j] = value;
        }
        void outputCTable()
        {
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    std::cout << " " << table[i][j] << " ";
                }
                std::cout << "\n";
            }
        }

};


#endif //BOMBERMANLOGIC_MAP_H

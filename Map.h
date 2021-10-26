//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_MAP_H
#define BOMBERMANLOGIC_MAP_H


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
};


#endif //BOMBERMANLOGIC_MAP_H

//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_MAP_H
#define BOMBERMANLOGIC_MAP_H


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
        int table[8][9] =
            {
                {2, 2, 2, 2, 2, 2, 2, 2, 2},
                {2, 0, 0, 0, 0, 1, 1, 0, 2},
                {2, 0, 2, 0, 2, 0, 2, 0, 2},
                {2, 0, 0, 1, 0, 0, 0, 0, 2},
                {2, 0, 2, 0, 2, 0, 2, 0, 2},
                {2, 0, 0, 0, 0, 1, 1, 0, 2},
                {2, 0, 1, 1, 0, 0, 0, 0, 2},
                {2, 2, 2, 2, 2, 2, 2, 2, 2}
            };
//        int iMap;
//        int jMap;
        public:
        friend class Player;
        friend class Bomb;
        friend class Enemies;
        Map();

        void setCellValue(int i, int j, int value);
        void outputCTable();


};


#endif //BOMBERMANLOGIC_MAP_H

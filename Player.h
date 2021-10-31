//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_PLAYER_H
#define BOMBERMANLOGIC_PLAYER_H
#include <stdbool.h>
#include <conio.h>
#include "Map.h"

class Player
{
    private:
        int **playerCoordinate;
        int iPlayer;
        int jPlayer;
    public:
    int health = 3;
    int score = 0;

    Player();
    Player(int i, int j, Map& map);
    int getIPosition();
    int getJPosition();
    friend class Bomb;
    friend class Enemies;
    friend class Map;

    void  movement(Player* player, Map& map, bool& isQuite);
    bool youCanMoveUp(Map map);
    bool youCanMoveDown(Map map);
    bool youCanMoveRight(Map map);
    bool youCanMoveLeft(Map map);
/*




    void moveRight(Map &map);*/
};


#endif //BOMBERMANLOGIC_PLAYER_H

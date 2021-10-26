//
// Created by gaydi on 25.10.2021.
//

#ifndef BOMBERMANLOGIC_PLAYER_H
#define BOMBERMANLOGIC_PLAYER_H
#include <stdbool.h>


class Player
{
    private:
        int** playerCoordinate;
        int iPlayer;
        int jPlayer;
        static int health;
        static int score;
    public:
    friend class Bomb;
    friend class Enemies;
    bool youCanMoveUp()
    {
        if (playerCoordinate[iPlayer - 1][jPlayer] == 0 && (iPlayer - 1) >= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool youCanMoveDown()
    {
        if (playerCoordinate[iPlayer + 1][jPlayer] == 0 && (iPlayer + 1) < 6)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool youCanMoveRight()
    {
        if (playerCoordinate[iPlayer][jPlayer + 1] == 0 && (jPlayer + 1) < 8)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool youCanMoveLeft()
    {
        if (playerCoordinate[iPlayer][jPlayer - 1] == 0 && (jPlayer - 1) >= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
 int Player::health = 3;

#endif //BOMBERMANLOGIC_PLAYER_H

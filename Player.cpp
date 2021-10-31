//
// Created by gaydi on 25.10.2021.
//
#include "Player.h"
#include "Map.h"

Player :: Player(int i, int j, Map& map)
{
    iPlayer = i;
    jPlayer = j;
    map.setCellValue(iPlayer, jPlayer, 4);
}

int Player :: getIPosition()
{
    return iPlayer;
}
int Player :: getJPosition()
{
    return jPlayer;
}

bool Player:: youCanMoveUp(Map map)
{
    if (map.table[iPlayer - 1][jPlayer] == EemptyPath && (iPlayer - 1) >= 0)
    {
    return true;
    }
    else
    {
    return false;
    }
}

bool Player :: youCanMoveDown(Map map)
{
    if (map.table[iPlayer + 1][jPlayer] == EemptyPath && (iPlayer + 1) < 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Player :: youCanMoveRight(Map map)
{
    if (map.table[iPlayer][jPlayer + 1] == EemptyPath && (jPlayer + 1) < 9)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Player :: youCanMoveLeft(Map map)
{
    if (map.table[iPlayer][jPlayer - 1] == EemptyPath && (jPlayer - 1) >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Player :: movement(Player* player, Map& map, bool& isQuite)
{
    if(kbhit())
    {
        switch (getch())
        {

            case 'a':
            {
                while(youCanMoveLeft(map))
                {
                    map.setCellValue(iPlayer, jPlayer--, Eplayer);
                    map.setCellValue(iPlayer, jPlayer++, EemptyPath);
                }
                break;
            }
            case 'd':
            {
                while(youCanMoveRight(map))
                {
                    map.setCellValue(iPlayer, jPlayer++, Eplayer);
                    map.setCellValue(iPlayer, jPlayer--, EemptyPath);
                }
                break;
            }
            case 'w':
            {
                while(youCanMoveUp(map))
                {
                    map.setCellValue(iPlayer--, jPlayer, Eplayer);
                    map.setCellValue(iPlayer++, jPlayer, EemptyPath);
                }
                break;
            }
            case 's':
            {
                while(youCanMoveDown(map))
                {
                    map.setCellValue(iPlayer++, jPlayer, Eplayer);
                    map.setCellValue(iPlayer--, jPlayer, EemptyPath);
                }
                break;
            }
            case 'x':
            {
                isQuite = false;
                break;
            }
        }
    }
}
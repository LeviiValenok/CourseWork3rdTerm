//
// Created by gaydi on 25.10.2021.
//
#include "Player.h"

Player :: Player(int i, int j)
{
    iPlayer = i;
    jPlayer = j;
}

int Player :: getIPosition()
{
    return iPlayer;
}
int Player :: getJPosition()
{
    return jPlayer;
}

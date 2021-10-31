#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <windows.h>
#include "Map.h"
#include "Player.h"
#include "Bomb.h"
#include "Enemies.h"

int main()
{
    Map* map = new Map();
    Player* player = new Player(1, 1, *map);
    map->outputCTable();

    bool isQuite = true;
    while(isQuite)
    {
        system("cls");
        map->outputCTable();
        player->movement(*player, *map, isQuite);
        
    }

//    map->setCellValue(0, 0, 5);

    return 0;
}

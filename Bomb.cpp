//
// Created by gaydi on 25.10.2021.
//

#include "Bomb.h"
#include "Player.h"
#include "Map.h"
#include "Enemies.h"

void Bomb :: setBomb (Player player, Map& map)
{
    iBomb = player.getIPosition();
    jBomb = player.getJPosition();
    map.setCellValue(iBomb, jBomb, Ebomb);

}


void Bomb :: destroyEnemies(Enemies& enemy, Player& player, Map map)
{
    //TODO: timer???
    //TODO: Change enemy's coordinate to current enemy coordinate
    //TODO: Get current enemy coordinate
    int iEnemyCurrent = enemy.iEnemy;
    int jEnemyCurrent = enemy.jEnemy;
    int enemyCurrentLocation = enemy.enemiesCoordinate[iEnemyCurrent][jEnemyCurrent];
    if (bombCoordinate[iBomb][jBomb] == enemyCurrentLocation ||
        bombCoordinate[iBomb + 1][jBomb] == enemyCurrentLocation ||
        bombCoordinate[iBomb - 1][jBomb] == enemyCurrentLocation ||
        bombCoordinate[iBomb][jBomb + 1] == enemyCurrentLocation ||
        bombCoordinate[iBomb][jBomb - 1] == enemyCurrentLocation)
    {
        //destroy an enemy
        player.score++;
    }
}


void Bomb :: killPlayer(Player player, Map map)
{
    int iPlayerCurrent = player.iPlayer;
    int jPlayerCurrent = player.jPlayer;
    int playerCurrenLocation = player.playerCoordinate[iPlayerCurrent][jPlayerCurrent];
    if (bombCoordinate[iBomb][jBomb] == playerCurrenLocation ||
        bombCoordinate[iBomb + 1][jBomb] == playerCurrenLocation ||
        bombCoordinate[iBomb - 1][jBomb] == playerCurrenLocation ||
        bombCoordinate[iBomb][jBomb + 1] == playerCurrenLocation ||
        bombCoordinate[iBomb][jBomb - 1] == playerCurrenLocation)
    {
        player.health--;
    }

}

//try destroy
void  Bomb :: chooseATarget(Player& player, Enemies& enemy, Bomb bomb, int iBombCurrent, int jBombCurrent, Map& map, cellType type)
{
    switch (bomb.bombCoordinate[iBombCurrent][jBombCurrent])
    {
        case EdestroyedBlock:
        {
            map.table[iBombCurrent][jBombCurrent] = EemptyPath;
            break;
        }
        case Eenemies:
        {
            //destroy enemy;
            break;
        }
        case Eplayer:
        {
            player.health--;
            if (player.health == 0) {
                std::cout << "Game is over :( " << std::endl;
            }
            break;
        }
    }
}
//check neighbors
void Bomb :: destroyObjects(Player& player, Enemies& enemy, Bomb bomb, Map& map, cellType type)
{
    int iPlayerCurrent = player.iPlayer;
    int jPlayerCurrent = player.jPlayer;
    int iEnemyCurrent = enemy.iEnemy;
    int jEnemyCurrent = enemy.jEnemy;

    if (bomb.bombCoordinate[iBomb][jBomb] == EdestroyedBlock ||
        bomb.bombCoordinate[iBomb][jBomb] == Eenemies || bomb.bombCoordinate[iBomb][jBomb] == Eplayer)
    {
        chooseATarget(player, enemy, bomb, iBomb, jBomb, map, type);
    }
    if (bomb.bombCoordinate[iBomb + 1][jBomb] == EdestroyedBlock ||
        bomb.bombCoordinate[iBomb + 1][jBomb] == Eenemies || bomb.bombCoordinate[iBomb + 1][jBomb] == Eplayer)
    {
        chooseATarget(player, enemy, bomb, iBomb + 1, jBomb, map, type);
    }
    if (bomb.bombCoordinate[iBomb - 1][jBomb] == EdestroyedBlock ||
        bomb.bombCoordinate[iBomb - 1][jBomb] == Eenemies || bomb.bombCoordinate[iBomb - 1][jBomb] == Eplayer)
    {
        chooseATarget(player, enemy, bomb, iBomb - 1, jBomb, map, type);
    }
    if (bomb.bombCoordinate[iBomb][jBomb + 1] == EdestroyedBlock ||
        bomb.bombCoordinate[iBomb][jBomb + 1] == Eenemies || bomb.bombCoordinate[iBomb][jBomb + 1] == Eplayer)
    {
        chooseATarget(player, enemy, bomb, iBomb, jBomb + 1, map, type);
    }
    if (bomb.bombCoordinate[iBomb][jBomb - 1] == EdestroyedBlock ||
        bomb.bombCoordinate[iBomb][jBomb - 1] == Eenemies || bomb.bombCoordinate[iBomb][jBomb - 1] == Eplayer)
    {
        chooseATarget(player, enemy, bomb, iBomb, jBomb - 1, map, type);
    }
}

void Bomb :: destroyBlocks(Map& map)
{
    if (bombCoordinate[iBomb][jBomb] == 1)
    {
        map.table[iBomb][jBomb] = 0;
    }
    else if (bombCoordinate[iBomb + 1][jBomb] == 1)
    {
        map.table[iBomb + 1][jBomb] = 0;
    }
    else if (bombCoordinate[iBomb - 1][jBomb] == 1)
    {
        map.table[iBomb - 1][jBomb] = 0;
    } else if (bombCoordinate[iBomb][jBomb + 1] == 1)
    {
        map.table[iBomb][jBomb + 1] = 0;
    } else if (bombCoordinate[iBomb][jBomb - 1] == 1)
    {
        map.table[iBomb][jBomb - 1] =0;
    }
}

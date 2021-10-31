//
// Created by gaydi on 25.10.2021.
//

#include "Map.h"
#include <iostream>

void Map :: setCellValue(int i, int j, int value)
{
    table[i][j] = value;
}

void Map :: outputCTable()
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
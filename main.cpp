#include <iostream>
#include <stdio.h>
#include "Map.h"

int main()
{
    Map* map = new Map();
    map->setCellValue(0, 0, 5);
    map->outputCTable();
    return 0;
}

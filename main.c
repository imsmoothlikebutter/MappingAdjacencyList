#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "graph.h"
#define ROW 3
#define COLUMN 3
#define NORTH 'N'
#define SOUTH 'S'
#define EAST 'E'
#define WEST 'W'
#define FRONT 'F'
#define BACK 'B'
#define RIGHT 'R'
#define LEFT 'L'

// 0 1
// 2 3

// 0 1 2
// 3 4 5
// 6 7 8

int main(){
    char currentOrientation = NORTH;
    graph* map = createGraph(ROW, COLUMN);
    addEdge(map,0,1,RIGHT,currentOrientation);
    addBarcode(map,0,1);
    currentOrientation = EAST;
    addEdge(map,1,2,FRONT,currentOrientation);
    addHump(map,1,2);
    currentOrientation = EAST;
    addEdge(map,2,5,RIGHT,currentOrientation);
    addHump(map,2,5);
    currentOrientation = SOUTH;
    addEdge(map,5,4,RIGHT,currentOrientation);
    currentOrientation = WEST;

    printGraph(map);
    printMap(map,ROW,COLUMN);

    destroyGraph(map);
    return 0;
}
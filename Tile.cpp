#include "Tile.h"
#include <iostream>
using namespace std;

int Tile::currentPosition()
{
    return currentSpot;
}

int Tile::goalPosition()
{
    return goalSpot;
}

void Tile::setPosition(int newPosition)
{
    currentSpot = newPosition;
}

void Tile::setGoalPosition(int newGoalPosition)
{
    goalSpot = newGoalPosition;
}
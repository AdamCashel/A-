#include "Tile.h"

using namespace std;



Tile::Tile(){
    this->value = 0;
}

Tile::Tile(int value){
    this->value = value;
}


void Tile::setValue(int value)
{
    this->value = value;
}

int Tile::getValue()
{
    return value;
}

#pragma once
#include <iostream>
using namespace std;

class Tile{

    public:

        Tile();

        Tile(int);

        int getValue();

        void setValue(int);

    private:
        int value;
};
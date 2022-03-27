#include <iostream>
using namespace std;
#pragma once

class Tile{

    public:
        int currentPosition();

        int goalPosition();

        void setPosition(int);

        void setGoalPosition(int);

    private:
        int currentSpot;

        int goalSpot;
};
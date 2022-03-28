#include "Heuristic.h"
#include "Tile.h"
#include <string>
#include <iostream>
#include <vector>

std::vector<int> OPEN;

std::vector<int> CLOSED;



void createBoard1()
{
    Tile t1;
    t1.setPosition(8);
    t1.setGoalPosition(1);

    Tile t2;
    t2.setPosition(1);
    t2.setGoalPosition(2);

    Tile t3;
    t3.setPosition(3);
    t3.setGoalPosition(3);

    Tile t4;
    t4.setPosition(4);
    t4.setGoalPosition(4);

    Tile t5;
    t5.setPosition(5);
    t5.setGoalPosition(5);

    Tile t6;
    t6.setPosition(9);
    t6.setGoalPosition(6);

    Tile t7;
    t7.setPosition(6);
    t7.setGoalPosition(7);
    
    Tile t8;
    t8.setPosition(2);
    t8.setGoalPosition(8);

    Tile t9;
    t9.setPosition(8);
    t9.setGoalPosition(9);
}

void createBoard2()
{
    Tile t1;
    t1.setPosition(8);
    t1.setGoalPosition(1);

    Tile t2;
    t1.setPosition(1);
    t1.setGoalPosition(2);

    Tile t3;
    t1.setPosition(3);
    t1.setGoalPosition(3);

    Tile t4;
    t1.setPosition(4);
    t1.setGoalPosition(4);

    Tile t5;
    t1.setPosition(5);
    t1.setGoalPosition(5);

    Tile t6;
    t1.setPosition(9);
    t1.setGoalPosition(6);

    Tile t7;
    t1.setPosition(6);
    t1.setGoalPosition(7);
    
    Tile t8;
    t1.setPosition(2);
    t1.setGoalPosition(8);

    Tile t9;
    t1.setPosition(8);
    t1.setGoalPosition(9);
}

void AStarAlgorithm()
{
    //Start of A*

    //(1) Start with OPEN containing only the initial node
    OPEN =

    //(2) Until a goal node is found, repeat the following procudure
        
        //(a) Set BESTNODE to point to SUCCESSOR


        //(b) Compute g(SUCCESSOR) = g(BESTNODE) + the cost of getting from BESTNODE to SUCCESSOR and f'(SUCCESSOR) + h(SUCCESSOR)


            //(i) See if SUCCESSOR is the same as any node on OPEN


            //(ii) If SUCCESSOR was not on OPEN, see if it is on CLOSED


            //(iii) If SUCCESSOR was not already on either OPEN or CLOSED

}


int main()
{
    createBoard1();
    AStarAlgorithm();

    createBoard2();
    AStarAlgorithm();

}
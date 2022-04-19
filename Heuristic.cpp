#include "Heuristic.h"

using namespace std;

void AStar_heuristic(Board* board){
    // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn(findHValue(board) + board->getG());
}

void Greedy_heuristic(Board* board){
     // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn(findHValue(board));
}

void Total_heuristic(Board* board){
     // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn(findHValue(board) + board->getG());
}

void Adam_heuristic(Board* board)
{
     // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn((3 * findHValue(board)) + (2 * board->getG()));
}

void Isaac_heuristic(Board* board)
{
    //Temp
       // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn((findHValue(board)) + (2 * board->getG()));
}
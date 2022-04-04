#include "Heuristic.h"
#include "Calculation.h"

using namespace std;

void AStar_heuristic(Board* board){
    // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn(h1_value(board) + board->getG());
}

void Greedy_heuristic(Board* board){
     // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn(h1_value(board));
}

void Total_heuristic(Board* board){
     // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn(h1_value(board));
}

void Adam_heuristic(Board* board)
{
     // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn((3 * h1_value(board)) + (2 * board->getG()));
}

void Isaac_heuristic(Board* boar)
{

}
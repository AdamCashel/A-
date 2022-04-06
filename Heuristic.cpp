#include "Heuristic.h"

using namespace std;

void AStar_heuristic(Board* board){
    // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn(board->getH() + board->getG());
}

void Greedy_heuristic(Board* board){
     // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn(board->getH());
}

void Total_heuristic(Board* board){
     // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn(board->getH());
}

void Adam_heuristic(Board* board)
{
     // calculate G(SUCCESSOR) 
    board->setG(board->getParent()->getG() + 1);

    // set Fn of SUCCESSOR
    board->setFn((3 * board->getH()) + (2 * board->getG()));
}

void Isaac_heuristic(Board* boar)
{

}
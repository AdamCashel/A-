#include "Board.h"


using namespace std;

Board::Board(){};


void Board::setTile(Tile tile, int index){
    board[index] = tile;
}

Tile Board::getTile(int index){
    return board[index];
}

void Board::setParent(Board* parent){
    this->parent = parent;
}

Board* Board::getParent(){
    return parent;
}

void Board::setChild(Board* child, int index){
    children[index] = child;
}

Board* Board::getChild(int index){
    return children[index];
}

vector<Board*> Board::getChildren(){
    return children;
}

void Board::setFn(int FnVal){
    Fn_Value = FnVal;
}

const bool operator==(Board &board1, Board &board2) 
{
    for(int i = 0; i < BOARD_SIZE; i++){
        if(board1.getBoardArray()[i].currentPosition() != board2.getBoardArray()[i].currentPosition()){
            return false;
        }
    }
    
    return true;
}

int Board::getFn(){
    return Fn_Value;
}

Tile* Board::getBoardArray(){
    return board;
}



#include "Board.h"


using namespace std;

Board::Board(){};

Board::Board(const Board* otherBoard){
    for(int i = 0; i < BOARD_ROWS; i++){
        for(int j = 0; j < BOARD_COLS; j++){
            board[i][j] = otherBoard->board[i][j];
        }
    }

    children = otherBoard->children;
    Fn_Value = otherBoard->Fn_Value;
}


void Board::setTile(Tile tile, int row, int col){
    board[row][col] = tile;
}

Tile Board::getTile(int row, int col){
    return board[row][col];
}

void Board::setParent(Board* parent){
    this->parent = parent;
}

Board* Board::getParent(){
    return parent;
}

void Board::addChild(Board* child){
    children.push_back(child);
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

int Board::getFn(){
    return Fn_Value;
}

const bool operator==(Board &board1, Board &board2) 
{
    for(int i = 0; i < BOARD_ROWS; i++){
        for(int j = 0; j < BOARD_COLS; i++){
            if(board1.getTile(i, j).currentPosition() != board2.getTile(i, j).currentPosition()){
                return false;
            }
        }
    }
    
    return true;
}

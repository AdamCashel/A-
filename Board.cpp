#include "Board.h"


using namespace std;

Board::Board(){
    parent = nullptr;
    Fn_Value = 0;
    g_value = 0;
};

Board::Board(const Board* otherBoard){
    for(int i = 0; i < BOARD_ROWS; i++){
        for(int j = 0; j < BOARD_COLS; j++){
            board[i][j] = otherBoard->board[i][j];
        }
    }

    children = otherBoard->children;
    Fn_Value = otherBoard->Fn_Value;
    g_value = otherBoard->g_value;
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

void Board::setG(int gValue){
    g_value = gValue;
}

int Board::getG(){
    return g_value;
}

const bool Board::operator==(Board board)
{
    for(int i = 0; i < BOARD_ROWS; i++){
        for(int j = 0; j < BOARD_COLS; i++){
            if(this->getTile(i, j).currentPosition() != board.getTile(i, j).currentPosition()){
                return false;
            }
        }
    }
    
    return true;
}

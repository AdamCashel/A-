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

void Board::setToGoalBoard(){

    Tile t1;
    t1.setPosition(1);
    t1.setGoalPosition(1);
    this->setTile(t1, 0 , 0);

    Tile t2;
    t2.setPosition(2);
    t2.setGoalPosition(2);
    this->setTile(t2, 0, 1);

    Tile t3;
    t3.setPosition(3);
    t3.setGoalPosition(3);
    this->setTile(t3, 0, 2);

    Tile t4;
    t4.setPosition(8);
    t4.setGoalPosition(8);
    this->setTile(t4, 1, 0);

    Tile t5;
    t5.setPosition(9);
    t5.setGoalPosition(9);
    this->setTile(t5, 1, 1);

    Tile t6;
    t6.setPosition(4);
    t6.setGoalPosition(4);
    this->setTile(t6, 1 ,2);

    Tile t7;
    t7.setPosition(7);
    t7.setGoalPosition(7);
    this->setTile(t7, 2, 0);
    
    Tile t8;
    t8.setPosition(6);
    t8.setGoalPosition(6);
    this->setTile(t8, 2, 1);

    Tile t9;
    t9.setPosition(5);
    t9.setGoalPosition(5);
    this->setTile(t9, 2, 2);
}

bool Board::compareToGoalBoard(){
    Board* goalBoard;

    Tile t1;
    t1.setPosition(1);
    t1.setGoalPosition(1);
    goalBoard->setTile(t1, 0 , 0);

    Tile t2;
    t2.setPosition(2);
    t2.setGoalPosition(2);
    goalBoard->setTile(t2, 0, 1);

    Tile t3;
    t3.setPosition(3);
    t3.setGoalPosition(3);
    goalBoard->setTile(t3, 0, 2);

    Tile t4;
    t4.setPosition(8);
    t4.setGoalPosition(8);
    goalBoard->setTile(t4, 1, 0);

    Tile t5;
    t5.setPosition(9);
    t5.setGoalPosition(9);
    goalBoard->setTile(t5, 1, 1);

    Tile t6;
    t6.setPosition(4);
    t6.setGoalPosition(4);
    goalBoard->setTile(t6, 1 ,2);

    Tile t7;
    t7.setPosition(7);
    t7.setGoalPosition(7);
    goalBoard->setTile(t7, 2, 0);
    
    Tile t8;
    t8.setPosition(6);
    t8.setGoalPosition(6);
    goalBoard->setTile(t8, 2, 1);

    Tile t9;
    t9.setPosition(5);
    t9.setGoalPosition(5);
    goalBoard->setTile(t9, 2, 2);

    if(goalBoard == this){
        return true;
    } else {
        return false;
    }
}


int Board::getH(){

    Board goalBoard;
    goalBoard.setToGoalBoard();

    int F_Val = 0;
    
    for(int i = 0; i < BOARD_ROWS; i++)
    {
        for(int j = 0; j < BOARD_COLS; j++){
            if(goalBoard.getTile(i, j).currentPosition() != this->getTile(i, j).currentPosition()){
                F_Val++;
            }
        }
    }
    return F_Val;
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

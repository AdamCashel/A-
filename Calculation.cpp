#include "Calculation.h"
#include "Board.h"
#include <time.h>

//Checks if Board node is goal node through the comparision of board array
bool check_goal(Board treeBoard, Board goalBoard){
    if(treeBoard.getBoardArray() == goalBoard.getBoardArray()){
        return true;
    }
    return false;
}

//Gets h1(n) value of Board 
int h1_value(Board treeBoard)
{
    int F_Val = 0;

    for(int i = 0; i < 9; i++)
    {
        if(goalBoard.getTile(i).currentPosition() != treeBoard.getTile(i).currentPosition())
        {
            F_Val++;
        }
    }
    return F_Val;
}

void creatGoalBoard()
{
    Tile t1;
    t1.setPosition(1);
    t1.setGoalPosition(1);
    goalBoard.setTile(t1, 0);

    Tile t2;
    t2.setPosition(2);
    t2.setGoalPosition(2);
    goalBoard.setTile(t2, 1);

    Tile t3;
    t3.setPosition(3);
    t3.setGoalPosition(3);
    goalBoard.setTile(t3, 2);

    Tile t4;
    t4.setPosition(4);
    t4.setGoalPosition(4);
    goalBoard.setTile(t4, 3);

    Tile t5;
    t5.setPosition(5);
    t5.setGoalPosition(5);
    goalBoard.setTile(t5, 4);

    Tile t6;
    t6.setPosition(6);
    t6.setGoalPosition(6);
    goalBoard.setTile(t6, 5);

    Tile t7;
    t7.setPosition(7);
    t7.setGoalPosition(7);
    goalBoard.setTile(t7, 6);
    
    Tile t8;
    t8.setPosition(8);
    t8.setGoalPosition(8);
    goalBoard.setTile(t8, 7);

    Tile t9;
    t9.setPosition(9);
    t9.setGoalPosition(9);
    goalBoard.setTile(t9, 8);
}

int g_value(Board){

}

Board createBoard(Board){

}

int lowest_fvalue(){
    
}

void CreateTable(double, int, int, int, double, int, int){

}

void ET_Start(){
    timer = clock();
}

double ET_End(){
    double total_time = clock() - timer;
}

int NG(Board){

}

int NE(){

}
int D(){

}

double bStar(){

}

int TP(){

}
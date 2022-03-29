#include "Calculation.h"
#include "Board.h"
#include <vector>
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

int g_value(Board){

}

Board createBoard(Board){

}

Board lowest_fvalue(vector<Board> open_array){
    Board temp;
    int index = 0;
    for(int i = 0; i < open_array.size(); i++){
        if(temp.getFn() > open_array[i].getFn()){
            index = i;
            temp = open_array[i];
        }
    }
    
    open_array.erase(next(open_array.at(index)));
    return temp;
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
#include "Calculation.h"
#include "Board.h"
#include <vector>
#include <time.h>


void getGoalPath(Board found_goal)
{
    std::vector<Board> Path;
    while(found_goal.getParent() != nullptr)
    {
        Path.push_back(found_goal);
        found_goal = *found_goal.getParent();
    }
}

//Gets h1(n) value of Board 
int h1_value(Board treeBoard)
{
    int F_Val = 0;

    for(int i = 0; i < BOARD_SIZE; i++)
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


Board lowest_fvalue(vector<Board> open_array){
    Board temp;
    int index = 0;
    for(int i = 0; i < open_array.size(); i++){
        if(temp.getFn() > open_array[i].getFn()){
            index = i;
            temp = open_array[i];
        }
    }
    
    open_array.erase(std::next(open_array.begin(), index));
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
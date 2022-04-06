#include "Calculation.h"
#include <vector>
#include <time.h>
#include <cmath>

void getGoalPath(Board found_goal)
{
    std::vector<Board> Path;
    while(found_goal.getParent() != nullptr)
    {
        Path.push_back(found_goal);
        found_goal = *found_goal.getParent();
    }
}


int g_value(Board){
    int dummy = 1;
    return dummy;
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


void generateSuccessors(Board* BESTNODE){
    // Attempt to create successor for all 4 possible box locations
    // 9 == box symbol
    int box_row, box_col;

    for(int i = 0; i < BOARD_ROWS; i++){
        for(int j = 0; j < BOARD_COLS; j++){
            if(BESTNODE->getTile(i, j).currentPosition() == 9){
                box_row = i;
                box_col = j;
            }
        }
    }

    // 0 - top  1 - right
    // 2 - bottom 3 - left
    for(int attempt = 0; attempt < 4; attempt++){

        Board* newSuccessor(BESTNODE);
        newSuccessor->setParent(BESTNODE);

        switch (attempt){
        case 0:
            // if box is not in the top row
            if(box_col != 0){
                // swap box tile and tile above
                Tile temp = newSuccessor->getTile(box_row - 1, box_col);
                newSuccessor->setTile(newSuccessor->getTile(box_row, box_col), box_row - 1, box_col);
                newSuccessor->setTile(temp, box_row, box_col);
                BESTNODE->addChild(newSuccessor);
            }
            break;

        case 1:
            // if box is not in the rightmost column
            if(box_col != 2){
                // swap box tile and tile above
                Tile temp = newSuccessor->getTile(box_row, box_col + 1);
                newSuccessor->setTile(newSuccessor->getTile(box_row, box_col), box_row, box_col + 1);
                newSuccessor->setTile(temp, box_row, box_col);
                BESTNODE->addChild(newSuccessor);
            }
            break;

        case 2:
            // if box is not in the bottom row
            if(box_row != 2){
                // swap box tile and tile above
                Tile temp = newSuccessor->getTile(box_row + 1, box_col);
                newSuccessor->setTile(newSuccessor->getTile(box_row, box_col), box_row + 1, box_col);
                newSuccessor->setTile(temp, box_row, box_col);
                BESTNODE->addChild(newSuccessor);
            }
            break;

        case 3:
            // if box is not in the leftmost column
            if(box_col != 0){
                // swap box tile and tile above
                Tile temp = newSuccessor->getTile(box_row, box_col - 1);
                newSuccessor->setTile(newSuccessor->getTile(box_row, box_col), box_row, box_col - 1);
                newSuccessor->setTile(temp, box_row, box_col);
                BESTNODE->addChild(newSuccessor);
            }
            break;
        
        default:
            break;
        }
    }
}


void reorderByFn(vector<Board> list){
    for(int i = 0; i < list.size(); i++){
        for(int j = i + 1; j < list.size(); j++){
            if(list[i].getFn() > list[j].getFn()){
                swap(list[i], list[j]);
            }
        }
    }
}

void propagateSuccessors(Board* OLD){
    // TODO: check if path is equivalent or better than the
    for(Board* child : OLD->getChildren()){
        if(child->getParent() == OLD){
            child->setG(OLD->getG() + 1);
            // this is the same as the heuristic function
            child->setFn(child->getH() + child->getG());

            propagateSuccessors(child);
        }
        else {
            int newPathValue = (OLD->getG() + 1) + child->getH();
            // current path is better
            if(child->getFn() < newPathValue){
                
            }
            // new path is better
            else {
                child->setParent(OLD);

                child->setG(OLD->getG() + 1);
                // this is the same as the heuristic function
                child->setFn(child->getH() + child->getG());

                propagateSuccessors(child);
            }
        }
    }
}

void CreateTable(double, int, int, int, double, int, int){

}

void ET_Start(){
    timer = clock();
}

float ET_End(){
    float total_time = clock() - timer;
    return total_time;
}

void start_nodes_generated()
{
    nodes_gen = 0;
}

void NG(){
    nodes_gen++;
}

int Nodes_generated_total()
{
    return nodes_gen;
}

void start_nodes_expanded()
{
    nodes_expanded++;
}

void NE()
{
    nodes_expanded++;
}

int Nodes_expanded()
{
    return nodes_expanded;
}

int D(){
    int dummy = 1;
    return dummy;
}

double bStar(Board goalNode){
    //bStar EQ: N^(1/D), where N = Total nodes processed, D = Depth at which solution was found
    int N = Nodes_expanded();
    int D = goalNode.getG();
    int bstar = pow(N,(1/D));
}

int TP(){
    int dummy = 1;
    return dummy;
}

void dataArr(int index, string numb, int arrayNumb, int EQ_numb)
{
    if(arrayNumb == 1)
    {
        data_arr1[EQ_numb][index] = numb;
    }
    else if(arrayNumb == 2)
    {
         data_arr2[EQ_numb][index] = numb;
    }
    else
    {
        cout << "ERROR dataArr()" << endl;
    }
}

void printTable1()
{
    cout << "Initial State #1:" << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "|    Heuristic Function    |    ET    |    NG    |    NE    |    D    |    b*    |    TP    |" << endl;
    cout << "|    A*                    |" << data_arr1[0][0] << "  " << data_arr1[0][1] << "  " << data_arr1[0][2] << "  " << data_arr1[0][3] << "  " << data_arr1[0][4] << "  " << data_arr1[0][5] << "  " << data_arr1[0][6] << "|" << endl;
    cout << "|    Total Cost           |" << data_arr1[1][0] << "  " << data_arr1[1][1] << "  " << data_arr1[1][2] << "  " << data_arr1[1][3] << "  " << data_arr1[1][4] << "  " << data_arr1[1][5] << "  " << data_arr1[1][6] << "|" << endl;
    cout << "|    Greedy              |" << data_arr1[2][0] << "  " << data_arr1[2][1] << "  " << data_arr1[2][2] << "  " << data_arr1[2][3] << "  " << data_arr1[2][4] << "  " << data_arr1[2][5] << "  " << data_arr1[2][6] << "|" << endl;
    cout << "|    Adams Heuristic       |" << data_arr1[3][0] << "  " << data_arr1[3][1] << "  " << data_arr1[3][2] << "  " << data_arr1[3][3] << "  " << data_arr1[3][4] << "  " << data_arr1[3][5] << "  " << data_arr1[3][6] << "|" << endl;
    cout << "|    Isaac Heuristic        |" << data_arr1[4][0] << "  " << data_arr1[4][1] << "  " << data_arr1[4][2] << "  " << data_arr1[4][3] << "  " << data_arr1[4][4] << "  " << data_arr1[4][5] << "  " << data_arr1[4][6] << "|" << endl;
}

void printTable2()
{
    cout << "Initial State #1:" << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "|    Heuristic Function    |    ET    |    NG    |    NE    |    D    |    b*    |    TP    |" << endl;
    cout << "|    A*                    |" << data_arr2[0][0] << "  " << data_arr2[0][1] << "  " << data_arr2[0][2] << "  " << data_arr1[0][3] << "  " << data_arr1[0][4] << "  " << data_arr1[0][5] << "  " << data_arr1[0][6] << "|" << endl;
    cout << "|    Total Cost           |" << data_arr2[1][0] << "  " << data_arr2[1][1] << "  " << data_arr2[1][2] << "  " << data_arr1[1][3] << "  " << data_arr1[1][4] << "  " << data_arr1[1][5] << "  " << data_arr1[1][6] << "|" << endl;
    cout << "|    Greedy              |" << data_arr2[2][0] << "  " << data_arr2[2][1] << "  " << data_arr2[2][2] << "  " << data_arr1[2][3] << "  " << data_arr1[2][4] << "  " << data_arr1[2][5] << "  " << data_arr1[2][6] << "|" << endl;
    cout << "|    Adams Heuristic       |" << data_arr2[3][0] << "  " << data_arr2[3][1] << "  " << data_arr2[3][2] << "  " << data_arr1[3][3] << "  " << data_arr1[3][4] << "  " << data_arr1[3][5] << "  " << data_arr1[3][6] << "|" << endl;
    cout << "|    Isaac Heuristic        |" << data_arr2[4][0] << "  " << data_arr2[4][1] << "  " << data_arr2[4][2] << "  " << data_arr1[4][3] << "  " << data_arr1[4][4] << "  " << data_arr1[4][5] << "  " << data_arr1[4][6] << "|" << endl;
}
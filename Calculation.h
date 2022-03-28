#include "Board.h"
#include "Tile.h"
#include <time.h>

Board goalBoard;

int statistics_table[6][6];

clock_t timer;

bool check_goal(Board, Board);

int h1_value(Board);

void createGoalBoard();

int g_value(Board);

Board creatBoard(Board);

//ET, NG, NE, D, bStar, TP, Number of Run
void CreateTable(double, int, int, int, double, int, int);

void ET_Start();

double ET_End();

int NG(Board);

int NE();

int D();

double bStar();

int TP();
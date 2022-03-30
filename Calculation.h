#pragma once
#include "Board.h"
#include "Tile.h"
#include <time.h>

using namespace std;

Board goalBoard;

int statistics_table[6][6];

clock_t timer;

void getGoalPath(Board);

int h1_value(Board);

int g_value(Board);

Board lowest_fvalue(vector<Board>);

void generateSuccessors(Board*);

void reorderByFn(vector<Board>);

//ET, NG, NE, D, bStar, TP, Number of Run
void CreateTable(double, int, int, int, double, int, int);

void ET_Start();

double ET_End();

int NG(Board);

int NE();

int D();

double bStar();

int TP();
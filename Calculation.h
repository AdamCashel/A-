#pragma once
#include <iostream>
#include "Board.h"
#include "Tile.h"
#include <time.h>
#include <string>
using namespace std;

Board goalBoard;

int statistics_table[5][6];

clock_t timer;

int nodes_gen = 0;

int nodes_expanded = 0;

string data_arr1[5][6]; //Write data into array then read for creating table1

string data_arr2[5][6]; //Write data into array then read for creating table2

void dataArr(int, string, int, int);

void getGoalPath(Board);

int h1_value(Board);

int g_value(Board);

Board lowest_fvalue(vector<Board>);

void generateSuccessors(Board*);

void reorderByFn(vector<Board>);

void propagateSuccessors(Board*);


//ET, NG, NE, D, bStar, TP, Number of Run
void CreateTable(double, int, int, int, double, int, int);

void ET_Start();

float ET_End();

void start_nodes_generated(); //Start nodes-gen = 0;
void NG(); //Nodes generated
int Nodes_generated_total(); //return nodes gen

void start_nodes_expanded();
void NE(); //Nodes Expanded
int Nodes_expanded();

int D(); //Depth of tree

double bStar(); //Effective branching factor b*

int TP(); //Total Path

//Print tables for each 2 initial states with 5 equations with 6 numbers

void printTable1();

void printTable2();
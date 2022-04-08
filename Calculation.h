#pragma once
#include <string>
#include "Board.h"
#include "Initialize.h"
#include <time.h>
#include <ctime>

using namespace std;

void dataArr(int, string, int, int);

void getGoalPath(Board);

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

void start_d(); //Set deepest_depth to 0
int get_d(); // return deepest depth
void set_d(int); //set deepest depth with new depth

double bStar(); //Effective branching factor b*

int TP(); //Total Path

//Print tables for each 2 initial states with 5 equations with 6 numbers

void printTable1();

void printTable2();
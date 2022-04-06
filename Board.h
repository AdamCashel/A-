#pragma once

#include <vector>
#include "Tile.h"

const int BOARD_SIZE = 9;
const int BOARD_ROWS = 3;
const int BOARD_COLS = 3;

class Board{
    private:
        Tile board[3][3];
        Board* parent;
        vector<Board*> children;
        int Fn_Value;
        int g_value;

    public:
        Board();

        Board(const Board*);

        void setTile(Tile, int, int);
        Tile getTile(int, int);

        void setParent(Board*);
        Board* getParent();

        void addChild(Board*);
        void setChild(Board*, int);
        Board* getChild(int);
        vector<Board*> getChildren();

        void setFn(int);
        int getFn();

        void setG(int);
        int getG();

        void setToGoalBoard();
        bool compareToGoalBoard();

        int getH();

        const bool operator==(Board);
              
};
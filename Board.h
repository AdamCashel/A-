#include "Tile.h"
#include <vector>
#pragma once

extern const int BOARD_SIZE = 9;
extern const int BOARD_ROWS = 3;
extern const int BOARD_COLS = 3;

class Board{
    private:
        Tile board[3][3];
        Board* parent;
        vector<Board*> children;
        int Fn_Value;

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

        const bool operator==(Board);
        
};
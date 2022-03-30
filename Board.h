#include "Tile.h"
#include <vector>
#pragma once

extern const int BOARD_SIZE = 9;

class Board{
    private:
        Tile board[9];
        Board* parent;
        vector<Board*> children;
        int Fn_Value;

    public:
        Board();

        Board(const Board*);

        void setTile(Tile, int);
        Tile getTile(int);

        void setParent(Board*);
        Board* getParent();

        void setChild(Board*, int);
        Board* getChild(int);

        void setFn(int);
        int getFn();

        const bool operator==(Board);

        Tile* getBoardArray();
        
        vector<Board*> getChildren();
};
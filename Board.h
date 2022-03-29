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

        void setTile(Tile, int);
        Tile getTile(int);

        void setParent(Board*);
        Board* getParent();

        void setChild(Board*, int);
        Board* getChild(int);

        void setFn(int);
        int getFn();

        // bool operator==(const Board);

        Tile* getBoardArray();
        
        vector<Board*> getChildren();

        Board(const Board &temp) {board[0] = temp.board[0], board[1] = temp.board[1],
        board[2] = temp.board[2], board[3] = temp.board[3], board[4] = temp.board[4], board[5] = temp.board[5],
        board[6] = temp.board[6], board[7] = temp.board[7], board[8] = temp.board[8], 
        parent = temp.parent, children = temp.children, Fn_Value = temp.Fn_Value;}
};
#include "Tile.h"
#include <vector>

class Board{
    private:
        Tile board[9];
        Board* parent;
        vector<Board*> children;
        int Fn_Value;

    public:
        void setTile(Tile, int);
        Tile getTile(int);

        void setParent(Board*);
        Board* getParent();

        void setChild(Board*, int);
        Board* getChild(int);

        void setFn(int);
        int getFn();

        Tile* getBoardArray();
        
        vector<Board*> getChildren();
};
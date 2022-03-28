#include "Tile.h"
#include <vector>

class Board{
    private:
        Tile board[9];
        Board* parent;
        vector<Board*> children;

    public:
        void setTile(Tile, int);
        Tile getTile(int);

        void setParent(Board*);
        Board* getParent();

        void setChild(Board*, int);
        Board* getChild(int);
        
        vector<Board*> getChildren();
};
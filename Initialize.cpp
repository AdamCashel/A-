#include "Initialize.h"


// 9 represents the box
void createBoard1(Board* board1)
{
    // ROW 1
    Tile t1;
    t1.setValue(2);
    board1->setTile(t1, 0, 0);

    Tile t2;
    t2.setValue(8);
    board1->setTile(t2, 0, 1);

    Tile t3;
    t3.setValue(3);
    board1->setTile(t3, 0, 2);

    // ROW 2
    Tile t4;
    t4.setValue(1);
    board1->setTile(t4, 1, 0);

    Tile t5;
    t5.setValue(6);
    board1->setTile(t5, 1, 1);

    Tile t6;
    t6.setValue(4);
    board1->setTile(t6, 1, 2);

    // ROW 3    
    Tile t7;
    t7.setValue(9);
    board1->setTile(t7, 2, 0);
    
    Tile t8;
    t8.setValue(7);
    board1->setTile(t8, 2, 1);

    Tile t9;
    t9.setValue(5);
    board1->setTile(t9, 2, 2);

}


void createBoard2(Board* board2)
{
    Tile t1;
    t1.setValue(2);
    board2->setTile(t1, 0 , 0);

    Tile t2;
    t2.setValue(1);
    board2->setTile(t2, 0, 1);

    Tile t3;
    t3.setValue(6);
    board2->setTile(t3, 0, 2);

    Tile t4;
    t4.setValue(4);
    board2->setTile(t4, 1, 0);

    Tile t5;
    t5.setValue(9);
    board2->setTile(t5, 1, 1);

    Tile t6;
    t6.setValue(8);
    board2->setTile(t6, 1, 2);

    Tile t7;
    t7.setValue(7);
    board2->setTile(t7, 2, 0);
    
    Tile t8;
    t8.setValue(5);
    board2->setTile(t8, 2, 1);

    Tile t9;
    t9.setValue(3);
    board2->setTile(t9, 2, 2);
}

Board createGoalBoard()
{
    Board board;

    Tile t1;
    t1.setValue(1);
    board.setTile(t1, 0 , 0);

    Tile t2;
    t2.setValue(2);
    board.setTile(t2, 0, 1);

    Tile t3;
    t3.setValue(3);
    board.setTile(t3, 0, 2);

    Tile t4;
    t4.setValue(8);
    board.setTile(t4, 1, 0);

    Tile t5;
    t5.setValue(9);
    board.setTile(t5, 1, 1);

    Tile t6;
    t6.setValue(4);
    board.setTile(t6, 1, 2);

    Tile t7;
    t7.setValue(7);
    board.setTile(t7, 2, 0);
    
    Tile t8;
    t8.setValue(6);
    board.setTile(t8, 2, 1);

    Tile t9;
    t9.setValue(5);
    board.setTile(t9, 2, 2);

    return board;
}

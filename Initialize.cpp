#include "Initialize.h"


// 9 represents the box
void createBoard1(Board* board1)
{
    Tile t1;
    t1.setPosition(2);
    t1.setGoalPosition(1);
    board1->setTile(t1, 0, 0);

    Tile t2;
    t2.setPosition(8);
    t2.setGoalPosition(2);
    board1->setTile(t2, 0, 1);

    Tile t3;
    t3.setPosition(3);
    t3.setGoalPosition(3);
    board1->setTile(t3, 0, 2);

    Tile t4;
    t4.setPosition(1);
    t4.setGoalPosition(8);
    board1->setTile(t4, 1, 0);

    Tile t5;
    t5.setPosition(6);
    t5.setGoalPosition(9);
    board1->setTile(t5, 1, 1);

    Tile t6;
    t6.setPosition(4);
    t6.setGoalPosition(4);
    board1->setTile(t6, 1, 2);

    Tile t7;
    t7.setPosition(9);
    t7.setGoalPosition(7);
    board1->setTile(t7, 2, 0);
    
    Tile t8;
    t8.setPosition(7);
    t8.setGoalPosition(6);
    board1->setTile(t8, 2, 1);

    Tile t9;
    t9.setPosition(5);
    t9.setGoalPosition(5);
    board1->setTile(t9, 2, 2);

}


void createBoard2(Board* board2)
{
    Tile t1;
    t1.setPosition(2);
    t1.setGoalPosition(1);
    board2->setTile(t1, 0 , 0);

    Tile t2;
    t2.setPosition(1);
    t2.setGoalPosition(2);
    board2->setTile(t2, 0, 1);

    Tile t3;
    t3.setPosition(6);
    t3.setGoalPosition(3);
    board2->setTile(t3, 0, 2);

    Tile t4;
    t4.setPosition(4);
    t4.setGoalPosition(8);
    board2->setTile(t4, 1, 0);

    Tile t5;
    t5.setPosition(9);
    t5.setGoalPosition(9);
    board2->setTile(t5, 1, 1);

    Tile t6;
    t6.setPosition(8);
    t6.setGoalPosition(4);
    board2->setTile(t6, 1, 2);

    Tile t7;
    t7.setPosition(7);
    t7.setGoalPosition(7);
    board2->setTile(t7, 2, 0);
    
    Tile t8;
    t8.setPosition(5);
    t8.setGoalPosition(6);
    board2->setTile(t8, 2, 1);

    Tile t9;
    t9.setPosition(3);
    t9.setGoalPosition(5);
    board2->setTile(t9, 2, 2);
}

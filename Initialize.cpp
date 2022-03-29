#include "Initialize.h"
#include "Tile.h"

void createBoard1(Board* board1)
{
    Tile t1;
    t1.setPosition(8);
    t1.setGoalPosition(1);
    board1->setTile(t1, 0);

    Tile t2;
    t2.setPosition(1);
    t2.setGoalPosition(2);
    board1->setTile(t2, 1);

    Tile t3;
    t3.setPosition(3);
    t3.setGoalPosition(3);
    board1->setTile(t3, 2);

    Tile t4;
    t4.setPosition(4);
    t4.setGoalPosition(4);
    board1->setTile(t4, 3);

    Tile t5;
    t5.setPosition(5);
    t5.setGoalPosition(5);
    board1->setTile(t5, 4);

    Tile t6;
    t6.setPosition(9);
    t6.setGoalPosition(6);
    board1->setTile(t6, 5);

    Tile t7;
    t7.setPosition(6);
    t7.setGoalPosition(7);
    board1->setTile(t7, 6);
    
    Tile t8;
    t8.setPosition(2);
    t8.setGoalPosition(8);
    board1->setTile(t8, 7);

    Tile t9;
    t9.setPosition(8);
    t9.setGoalPosition(9);
    board1->setTile(t9, 8);

}


void createBoard2(Board* board2)
{
    Tile t1;
    t1.setPosition(8);
    t1.setGoalPosition(1);
    board2->setTile(t1, 0);

    Tile t2;
    t2.setPosition(1);
    t2.setGoalPosition(2);
    board2->setTile(t2, 1);

    Tile t3;
    t3.setPosition(3);
    t3.setGoalPosition(3);
    board2->setTile(t3, 2);

    Tile t4;
    t4.setPosition(4);
    t4.setGoalPosition(4);
    board2->setTile(t4, 3);

    Tile t5;
    t5.setPosition(5);
    t5.setGoalPosition(5);
    board2->setTile(t5, 4);

    Tile t6;
    t6.setPosition(9);
    t6.setGoalPosition(6);
    board2->setTile(t6, 5);

    Tile t7;
    t7.setPosition(6);
    t7.setGoalPosition(7);
    board2->setTile(t7, 6);
    
    Tile t8;
    t8.setPosition(2);
    t8.setGoalPosition(8);
    board2->setTile(t8, 7);

    Tile t9;
    t9.setPosition(8);
    t9.setGoalPosition(9);
    board2->setTile(t9, 8);
}


void createGoalBoard(Board* goalBoard)
{
    Tile t1;
    t1.setPosition(1);
    t1.setGoalPosition(1);
    goalBoard->setTile(t1, 0);

    Tile t2;
    t2.setPosition(2);
    t2.setGoalPosition(2);
    goalBoard->setTile(t2, 1);

    Tile t3;
    t3.setPosition(3);
    t3.setGoalPosition(3);
    goalBoard->setTile(t3, 2);

    Tile t4;
    t4.setPosition(4);
    t4.setGoalPosition(4);
    goalBoard->setTile(t4, 3);

    Tile t5;
    t5.setPosition(5);
    t5.setGoalPosition(5);
    goalBoard->setTile(t5, 4);

    Tile t6;
    t6.setPosition(6);
    t6.setGoalPosition(6);
    goalBoard->setTile(t6, 5);

    Tile t7;
    t7.setPosition(7);
    t7.setGoalPosition(7);
    goalBoard->setTile(t7, 6);
    
    Tile t8;
    t8.setPosition(8);
    t8.setGoalPosition(8);
    goalBoard->setTile(t8, 7);

    Tile t9;
    t9.setPosition(9);
    t9.setGoalPosition(9);
    goalBoard->setTile(t9, 8);
}

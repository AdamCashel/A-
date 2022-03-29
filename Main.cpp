#include "Heuristic.h"
#include "Calculation.h"
#include "Tile.h"
#include "Board.h"
#include "Initialize.h"
#include <string>
#include <iostream>
#include <vector>

std::vector<Board> OPEN;
std::vector<Board> SUCS;
std::vector<Board> CLOSED;

Board BESTNODE;
Board S;

Board board1;
Board board2;

void AStarAlgorithm(Board initial_board, void(*heuristic))
{
    // Start of A*

    //(1) Start with OPEN containing only the initial node
    /*Set that node's g value to 0, its h' value to whatever it is, and its f' value to h' + 0, or h'.
    Set CLOSED to the empty list.
    */
    OPEN.push_back(initial_board);
    bool Goal_Node = false;
    //(2) Until a goal node is found, repeat the following procudure
    /*If there are no nodes on OPEN, report failure. Otherwise, pick the node on OPEN with the lowest f’ value.
    Call it BESTNODE. Remove it from OPEN. Place it on CLOSED. See if BESTNODE is a goal node.
    If so, exit and report a solution (either BESTNODE if all we want is the node or the path that has been
    created between the initial state and BESTNODE if we are interested in the path). Otherwise, generate the successors of BESTNODE.
    For each such SUCCESSOR, do the following:
    */
    while (!Goal_Node)
    {

        // If there are no nodes on OPEN, report failure.
        if (OPEN.empty())
        {
            std::cout << "FAILURE" << std::endl;
            return;
        }

        // Otherwise, pick the node on OPEN with the lowest f’ value. Call it BESTNODE.
        BESTNODE = lowest_fvalue(OPEN);

        // Remove it from OPEN.
        int index = 0;
        Board temp;
        for (int i = 0; i < OPEN.size(); i++)
        {
            if (OPEN[i] == BESTNODE)
            {
                index = i;
            }
        }
        temp = OPEN[index];
        OPEN.erase(std::next(OPEN.begin(), index));

        // Place it on CLOSED.
        CLOSED.push_back(temp);

        // See if BESTNODE is a goal node.  If so, exit and report a solution (either BESTNODE if all we want is the
        // node or the path that has been created between the initial state and BESTNODE if we are interested in the path)
        if (BESTNODE == goalBoard)
        {
            // Goal node is found
            std::cout << "GOAL FOUND" << std::endl;
            getGoalPath(BESTNODE);
        }
        else
        {
            // Otherwise, generate the successors of BESTNODE. For each such SUCCESSOR, do the following:
            //(a) Set BESTNODE to point to SUCCESSOR
            BESTNODE.setChild(SUCCESSOR, 1);

            //(b) Compute g(SUCCESSOR) = g(BESTNODE) + the cost of getting from BESTNODE to SUCCESSOR and f'(SUCCESSOR) + h(SUCCESSOR)
            //Or use a certain heurisitc function
           SUCCESSOR.setFn(heurisitc(SUCCESSOR));
            //(i) See if SUCCESSOR is the same as any node on OPEN
            /*(i.e., It has already been generated but not processed). If so, call that node OLD. Since this node already exists in the graph,
            we can throw SUCCESSOR away and add OLD to the list of BESTNODE's successors. Now we must decide whether OLD's parent link should
            be reset to point to BESTNODE. It should be if the path we have  just found to SUCCESSOR is cheaper than the current best path to
            OLD (since SUCCESSOR and OLD are really the same node). So, see whether it is cheaper to get to the OLD via its current parent or
            to SUCCESSOR via BESTNODE by comparing their g values. If OLD is cheaper (or just as cheap), then we need do nothing. If SUCCESSOR
            is cheaper, then reset OLD's parent link to point to BESTNODE, record the new cheaper path in g(OLD), and update f’(OLD). Add SUCCESSOR
            to open and re-oder open on the bases of f values.
            */

            //(ii) If SUCCESSOR was not on OPEN, see if it is on CLOSED
            /*If so, call the node on CLOSED OLD and add OLD to the list of BESTNODE's successors. Check to see if the new path or the old path is
            better. If OLD’s path is better, Ignore the SUCCESSOR.; otherwise, just as in step 2(c), and set the parent link-and g and f’ values
            appropriately. [reset OLD's parent link to point to BESTNODE, record the new cheaper path in g(OLD), and update f’(OLD). Add SUCCESSOR
            to open and re-oder open on the bases of f values.] If we have just found a better path to OLD, we must propagate the improvement to OLD's
            successors. This is a bit tricky. OLD points to its successors. Each successor in turn points to its successors, and so forth, until each
            branch terminates with a node that either is still on OPEN or has no successors. So, to propagate the new cost downward, do a depth-first
            traversal of the tree starting at OLD, changing each node's g value (and thus also its f' value), terminating each branch when you reach
            either a node with no successors or a node to which an equivalent or better path has already been found. This condition is easy to check for.
            Each node's parent link points back to its best-known parent. As  we propagate down to a node, see if its parent points to the node we are
            corning from. If so, continue the propagation. If not, then its g value already reflects the better path of which it is part. So, the propagation
            may stop here. But it is possible that with the new value of g being propagated downward, the path we are following may become better than the
            path through the current parent. So, compare the two. If the path through the current parent is still better, stop the propagation. If the path
            we are propagating through is now better, reset the parent and continue propagation.

            */

            //(iii) If SUCCESSOR was not already on either OPEN or CLOSED
            /*Point SUCCESSOR to BESTNODE and put it on OPEN. Re-order states on OPEN by f values.
             */
        }
    }
}

int main()
{
    // Regular A* Heuristic function: f(n) = g(n) + h1(n)
    createBoard1(&board1);
    ET_Start();
    AStarAlgorithm(board1, &AStar_heuristic);
    ET_End();

    // Total Cost Search Heuristic function
    createBoard2(&board2);
    AStarAlgorithm(board2, &AStar_heuristic);
}
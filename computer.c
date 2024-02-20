
#include "computer.h"

void computer(char *square)
{
    int i,pt,bpt=-20,bestmove;
    for (i=0;i<9;i++)
    {
            if (square[i] == ' ')
            {
                square[i]='O';
                pt=minimax(square,0);
                square[i]=' ';
                if(pt>bpt)
                {
                    bpt=pt;
                    bestmove=i;

                }
            }

    }
    square[bestmove]='O';
}

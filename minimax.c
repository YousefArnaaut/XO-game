
#include "minimax.h"

int minimax(char *square ,int ismax)
{
    int score,i,pt;
    score = check_fun(square);
    if (score != 0)
    {
        return score;
    }
    if (ismax)      //maximizer
    {
        int bpt = -1;
        for (i=0;i<9;i++)
        {

                if (square[i] == ' ')
                {
                    square[i] = 'O';
                    pt = minimax(square,0);
                    square[i] = ' ';
                    if (pt>bpt)
                    {
                        bpt = pt;
                    }
                }

        }
        return bpt;
    }
    else        //minimizer
    {
        int bpt = 1;
        for (i=0;i<9;i++)
        {

                if (square[i]== ' ')
                {
                    square[i] = 'X';
                    pt = minimax(square,1);
                    square[i] = ' ';
                    if (pt<bpt)
                    {
                        bpt = pt;
                    }
                }

        }
        return bpt;
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#include "minimax.h"
#include "draw_board.h"
#include "computer.h"
#include "check.h"
#include "human.h"

    char square[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    bool player = 1;
    char check = 0;


int main()
{


    printf("\n\n\t\tThe value of the squares is:\n");
    printf("\t\t  1  |  2  |  3  \n");
    printf("\t\t-----------------\n");
    printf("\t\t  4  |  5  |  6  \n");
    printf("\t\t-----------------\n");
    printf("\t\t  7  |  8  |  9  \n");

    while( check == 0 ){

        if(player)
            human(square);

        else
            computer(square);

         check = check_fun(square);
         player = (!player);

    }

    draw_board(square);

    if( check == -1 )
        printf("you won");
    else if( check == 2 )
        printf("you lose");
    else if ( check == 1 )
        printf("Draw");


    return 0;
}

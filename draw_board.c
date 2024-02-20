
#include "draw_board.h"

void draw_board (char *square){

    system("cls");
    printf("\n\n\t\t  %c  |  %c  |  %c  \n",square[0],square[1],square[2]);
    printf("\t\t-----------------\n");
    printf("\t\t  %c  |  %c  |  %c  \n",square[3],square[4],square[5]);
    printf("\t\t-----------------\n");
    printf("\t\t  %c  |  %c  |  %c  \n",square[6],square[7],square[8]);

}

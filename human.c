
#include "human.h"

void human( char *square ){


    char index;
    system("cls");
    printf("\n\n\t\t  %c  |  %c  |  %c  \n",square[0],square[1],square[2]);
    printf("\t\t-----------------\n");
    printf("\t\t  %c  |  %c  |  %c  \n",square[3],square[4],square[5]);
    printf("\t\t-----------------\n");
    printf("\t\t  %c  |  %c  |  %c  \n",square[6],square[7],square[8]);

    printf("\t\tEnter the value of square: ");
    scanf("%d",&index);

    if( square[index] == ' ' )
        square[index] = 'X';

    else{
        printf("this square is all ready occupied");
        sleep(2);
        human(square);
    }


}


#include "check.h"

int check_fun( char *square){

    if( (square[0] == square[1]) && (square[1] == square[2]) )
        if( square[0] == 'X' )
            return -1;
        else
            return 2;


    else if( (square[0] == square[3]) && (square[3] == square[6]) )
        if( square[0] == 'X' )
            return -1;
        else
            return 2;

    else if( (square[0] == square[4]) && (square[4] == square[8]) )
        if( square[0] == 'X' )
            return -1;
        else
            return 2;

    else if( (square[6] == square[7]) && (square[7] == square[8]) )
        if( square[6] == 'X' )
            return -1;
        else
            return 2;

    else if( (square[2] == square[5]) && (square[5] == square[8]) )
        if( square[2] == 'X' )
            return -1;
        else
            return 2;

    else if( (square[2] == square[4]) && (square[4] == square[6]) )
        if( square[2] == 'X' )
            return -1;
        else
            return 2;

    else if( (square[1] == square[4]) && (square[4] == square[7]) )
        if( square[1] == 'X' )
            return -1;
        else
            return 2;

    else if( (square[3] == square[4]) && (square[4] == square[5]) )
        if( square[3] == 'X' )
            return -1;
        else
            return 2;

    else if( square[0] != ' ' && square[1] != ' ' && square[2] != ' ' && square[3] != ' ' && square[4] != ' ' && square[5] != ' ' && square[6] != ' ' && square[7] != ' ' && square[8] != ' ')
        return 1;

    else
        return 0;

}

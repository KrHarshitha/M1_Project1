#include "sub_integers.h"

function_status_t sub_integers(int op1, int op2, int* result)


{
    long int sub = op1 - op2;
    
    if(sub > INT_MAX)
        return OVERFLOW;

    if(sub < INT_MIN)
        return UNDERFLOW;

    *result = sub;
    return SUCCESS;
}


    


    

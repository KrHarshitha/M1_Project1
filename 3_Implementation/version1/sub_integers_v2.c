#include "stdio.h"
#include "unity.h"

int sub_integers(int op1, int op2)
{
    int Sub = op1 - op2;

    return Sub;
}

void manual_test_sub_integers()
{

    if(0 == sub_integers(0, 0))
    
        printf("Sub function works\n");

    else

        printf("Sub function is not working");

    if(-10 == sub_integers(10, 20))

          printf("Sub function works for positive numbers\n");

    else

        printf("Sub function is not working for positive numbers");

    if(-10 == sub_integers(-10, -20))

        printf("Sub function works for negative number\n");

    else

        printf("Sub function is not working for negative number");

}
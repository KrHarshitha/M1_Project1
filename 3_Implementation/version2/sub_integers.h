/*
 * @file sub_integers.h
 * @author Harshitha KR
 * @brief Interface for Subtracting two integer numbers with underflow and overflow checks
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _SUB_INTEGER_H_
#define _SUB_INTEGER_H_

#include <stdio.h>
#include <limits.h>


typedef enum function_status_t
{
    SUCCESS,
    OVERFLOW,
    UNDERFLOW
}function_status_t;

/*
 * @brief Function to sub 2 integer numbers
 * 
 * @param op1[in] operand 1 to be subtracted
 * @param op2[in] operand 2 to be subtracted
 * @param result[out] Result of sub operation if success
 * @return function_status_t  Result of the function execution
 */

 function_status_t sub_integers(int op1, int op2, int* result);

#endif  /* _SUB_INTEGER_H_ */
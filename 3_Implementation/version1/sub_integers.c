#include "stdio.h"

int main()
{
    int op1 = 0, op2 = 0;

    printf("Enter two number to be subtracted\n");
    scanf("%d %d", &op1, &op2);

    int Sub = op1 + op2;
    
    printf("Sub = %d", Sub);
    
    return 0;
}
/**
 * @file calc.c
 * @author Harshitha (harshitha00002@gmail.com)
 * @brief This is the main program where the project is run
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14159
#define note "Enter a valid operation"
int add(int n1 ,int n2 );

int sub(int n1,int n2 );

int multiply(int n1,int n2 );

int divide(int n1, int n2 );

int mod(int n1 , int n2);

int power(int n1,int n2 );

int fact(int n1);

int square(int n1 );

int cube(int n1 );

int squareroot(int n1 );

int sinx(int n1 );

int cosx(int n1 );

int tanx(int n1 );

int secx(int n1);

int cosecx(int n1);

int cotx(int n1);
/* Start of the application */
/**
 * @brief Main program
 * 
 * @return int 
 */
int main()
{
    int a,b,*p1,*p2;
    p1=&a;
    p2=&b;
    float value;
    int ch=0;

    printf("\n\t\t *****Welcome to a simple scientific calculator!!*****\n");
    
          
    printf(" \n OPERATIONS MENU \n\n");
    printf("   \n ARITHMETIC FUNCTIONS   \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Modulus \n 6.Power \n");
    printf("   \n SINGLE INPUT FUNCTIONS  \n 7.Factorial \n 8.Square \n 9.Cube \n 10.Squareroot \n");
    printf("   \n TRIGNOMETRIC FUNCTIONS \n 11.Sine \n 12.Cosine \n 13.Tangent \n 14.Secant \n 15.Cosecant \n 16.Cotangent \n");
    printf("   \n 0.Quit the program \n\n");
    printf("\n\nEnter the operation : ");
    scanf("%d",&ch);
            
    switch(ch)
    {
        case 1:
            printf("Enter two numbers for addition:");
            scanf("%d%d",&a,&b);
            value=add(p1,p2);
            printf("The sum of %d and %d is %d\n",a, b, (int)value);
            break;
        case 2:
            printf("Enter two numbers for subtraction:");
            scanf("%d%d",&a,&b);
            value=sub(p1,p2);
            printf("The subtraction  of %d and %d is %d\n",a, b, (int)value);
            break;
        case 3:
            printf("Enter two numbers for multiplication:");
            scanf("%d%d",&a,&b);
            value=multiply(p1,p2);
            printf("The multiplication of %d and %d is %d\n",a, b, (int)value);
            break;
        case 4:
            printf("Enter two number for division:");
            scanf("%d%d",&a,&b);
            value=divide(p1,p2);
            printf("The division of %d and %d is %d\n",a, b,(int)value);
            break;
        case 5:
            printf("Enter two number for modulus:");
            scanf("%d%d",&a,&b);
            value=mod(p1,p2);
            printf("The modulus of %d and %d is %d\n",a, b, (int)value);
            break;
        case 6:
            printf("Enter base and exponent for power:");
            scanf("%d%d",&a,&b);
            value=power(p1,p2);
            printf("The power of %d and %d is %d\n",a, b, (int)value);
            break;
        case 7:
            printf("Enter the number for factorial:");
            scanf("%d",&a);
            value=fact(p1);
            printf("The factorial of %d is %d\n",a, (int)value);
            break;
        case 8:
            printf("Enter the number for square:");
            scanf("%d",&a);
            value=square(p1);
            printf("The square of %d is %d\n",a,(int)value);
            break;
        case 9:
            printf("Enter the number for cube:");
            scanf("%d",&a);
            value=cube(p1);
            printf("The cube of %d is %d\n",a,(int)value);
            break;
        case 10:
            printf("Enter the number for squareroot:");
            scanf("%d",&a);
            value=squareroot(p1);
            printf("The squareroot of %d is %d\n",a,(int)value);
            break;
        case 11:
            printf("Enter the angle in degree:");
            scanf("%d",&a);
            value=sinx(p1);
            printf("The sine value of %d is %.3f \n ",a,value);
            break;
        case 12:
            printf("Enter the angle in degree:");
            scanf("%d",&a);
            value=cosx(p1);
            printf("The cosine value of %d is %.3f \n",a,value);
            break;
        case 13:
            printf("Enter the angle in degree:");
            scanf("%d",&a);
            value=tanx(p1);
            printf("The tangent value of %d is %.3f \n",a,value);
            break;
        case 14:
            printf("Enter the angle in degree:");
            scanf("%d",&a);
            value=secx(p1);
            printf("The secant value of %d is %.3f \n",a,value);
            break;
        case 15:
            printf("Enter the angle in degree:");
            scanf("%d",&a);
            value=cosecx(p1);
            printf("The cosecant value of %d is %.3f \n",a,value);
            break;
        case 16:
            printf("Enter the angle in degree:");
            scanf("%d",&a);
            value=cotx(p1);
            printf("The cotangent of %d is %.3f \n",a,value);
            break;
        case 0:
            exit(0);
            default:
            printf("\n********** %s ***********\n",note);
        }
    return 0;
} 
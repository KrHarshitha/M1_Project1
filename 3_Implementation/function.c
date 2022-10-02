/**
 * @file function.c
 * @author Harshitha (harshitha00002@gmail.com)
 * @brief This is the functions program where the project is run
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include "math.h"
#include "unity.h"
#define PI 3.14159
/**
 * @brief Addition of two numbers
 * @param[in] operand1
 * @param[in] operand2
 * @return addition value of operand1 and operand2
 */
int add(int n1,int n2)
{    
    int res=n1 + n2;
    return res;
}
/**
 * @brief Subtraction of two numbers
 * @param[in] operand1
 * @param[in] operand2
 * @return subtraction value of operand1 and operand2
 * 
 */
int sub(int n1,int n2)
{    
    int res=n1 - n2;
    return res;
}
/**
 * @brief Multiplication of two numbers
 * @param[in] operand1
 * @param[in] operand2
 * @return multiplication value of operand1 and operand2
 * 
 */
int multiply(int n1,int n2)
{
     int res=n1 * n2;
     return res;
}  
/**
 * @brief Division of two numbers
 * @param[in] operand1
 * @param[in] operand2
 * @return division value of operand1 and operand2
 * 
 */   
int divide(int n1,int n2)
{
    int res=n1 / n2;
    return res;
    
}
/**
 * @brief Modulus of two numbers
 * @param[in] operand1
 * @param[in] operand2
 * @return modulus value of operand1 and operand2
 * 
 */
int mod(int n1,int n2)
{    
    int res=n1 % n2;
    return res;
}
/**
 * @brief Factorial of a number
 * @param[in] operand1
 * @return factorial value of operand1 
 * 
 */
int fact(int n1)
{
    int res=1;
    if(n1 < 0)
    {
        return 0;
    }
    else
    {
        for (int i = 1; i <=n1; ++i) 
            res = res*i; //res*
    }
    /*for (int i = 1; i <=n1; ++i) 
        res = res*i;*/
    return res;
}
/**
 * @brief Power of two numbers
 * @param[in] operand1
 * @param[in] operand2
 * @return power value of operand1 and operand2
 */
int power(int n1,int n2) 
{
    int res;
    res=pow(n1,n2);
    return res;
}
/**
 * @brief Square of a number
 * @param[in] operand1
 * @return Square value of a operand
 * 
 */
int square(int n1)
{
    int res;
    res=pow(n1,2);
    return res;

}
/**
 * @brief Cube of a number
 * @param[in] operand1
 * @return Cube value of operand1
 * 
 */
int cube(int n1)
{
    int res;
    res=pow(n1,3);
    return res;
}
/**
 * @brief Squareroot of a number
 * @param[in] operand1
 * @return squareroot of operand1
 * 
 */
int squareroot(int n1)
{
    int res;
    res= sqrt(n1);
    return res;
}
/**
 * @brief Sine value of a number
 * @param[in] operand1
 * @return sine value of operand1
 * 
 */
int sinx(int n1)
{
    float res;
    res=sin(n1 * (PI/180));      
    return res;
}
/**
 * @brief Cosine value of a number
 * @param[in] operand1
 * @return cosine value of  operand1
 * 
 */
int cosx(int n1)
{
    float res;
    res=cos(n1 * (PI/180));
    return res;
}
/**
 * @brief Tangent value of a number
 * @param[in] operand1
 * @return tangent value of operand1
 * 
 */
int tanx(int n1)
{
    float res;
    res=tan(n1 * (PI/180));
    return res; 
} 
/**
 * @brief Secant value of a number
 * @param[in] operand1
 * @return secant value of operand1
 * 
 */   
int secx(int n1)
{
    float res;
    res=1/cos(n1 * (PI/180));
    return res;
}
/**
 * @brief Cosecant value of a number
 * @param[in] operand1
 * @return cosecant value of operand1
 * 
 */
int cosecx(int n1)
{
    float res;
    res=1/sin(n1 * (PI/180));
    return res;
}
/**
 * @brief Cotangent value of a number
 * @param[in] operand1
 * @return cotangent value of operand1
 * 
 */
int cotx(int n1)
{
    float res;
    res=1/tan(n1 * (PI/180));
    return res;
}


void test_add(void)
{
    //TEST_ASSERT_EQUAL(40,add(10,20));
    TEST_ASSERT_EQUAL(1600,add(800,800));
    printf("Addition operation is completed\n");
}    
void test_sub(void)
{
    TEST_ASSERT_EQUAL(-30,sub(20,50));
    TEST_ASSERT_EQUAL(200,sub(500,300));
    printf("\nSubtraction operation is completed\n");
}
void test_multiply(void)
{
    TEST_ASSERT_EQUAL(0,multiply(0,10));
    TEST_ASSERT_EQUAL(16,multiply(2,8));
    printf("\nMultiplication operation is completed\n");
}
void test_divide(void)
{
    TEST_ASSERT_EQUAL(0,divide(0,4));
    //TEST_ASSERT_EQUAL(8,divide(4,2));
    printf("\nDivision operation is completed\n");
}
void test_mod(void)
{
    //TEST_ASSERT_EQUAL(0,mod(1,0));
    TEST_ASSERT_EQUAL(0,mod(36,6));
    printf("\nModulus operation is completed\n");
}
void test_power(void)
{
    //TEST_ASSERT_EQUAL(0,power(1,0));
    TEST_ASSERT_EQUAL(16,power(4,2));
    printf("\nPower operation is completed\n");
}
void test_fact(void)
{
    //TEST_ASSERT_EQUAL(120,fact(5));
    TEST_ASSERT_EQUAL(6,fact(3));
    printf("\nFactorial operation is completed\n");
}
void test_square(void)
{
    TEST_ASSERT_EQUAL(4,square(2));
    TEST_ASSERT_EQUAL(25,square(5));
    printf("\nSquare operation is completed\n");
}
void test_cube(void)
{
    TEST_ASSERT_EQUAL(8,cube(2));
    TEST_ASSERT_EQUAL(27,cube(3));
    printf("\nCube operation is completed\n");
}
void test_squareroot(void)
{
    TEST_ASSERT_EQUAL(5,squareroot(25));
    TEST_ASSERT_EQUAL(6,squareroot(36));
    printf("\nSquareroot operation is completed\n");
}
void test_sinx(void)
{
    TEST_ASSERT_EQUAL(0.500,sinx(30));
    TEST_ASSERT_EQUAL(0.866,sinx(60));
    printf("\nSine operation is completed\n");
}
void test_cosx(void)
{
    TEST_ASSERT_EQUAL(0.866,cosx(30));
    TEST_ASSERT_EQUAL(0.707,cosx(45));
    printf("\nCos operation is completed\n");
}
void test_tanx(void)
{
    TEST_ASSERT_EQUAL(0.577,tanx(30));
    TEST_ASSERT_EQUAL(1.732,tanx(60));
    printf("\nTan operation is completed\n");
}
void test_secx(void)
{
    TEST_ASSERT_EQUAL(4.134,secx(76));
    TEST_ASSERT_EQUAL(1.206,secx(34));
    printf("\nSec operation is completed\n");
}
void test_cosecx(void)
{
    //TEST_ASSERT_EQUAL(1.155,cosecx(30));
    TEST_ASSERT_EQUAL(1.015,cosecx(80));
    printf("\nCosec operation is completed\n");
}
void test_cotx(void)
{
    TEST_ASSERT_EQUAL(1.428,cotx(35));
    TEST_ASSERT_EQUAL(0.577,cotx(60));
    printf("\nCot operation is completed\n");
}

/*
int main()
{
    test_add();
    test_sub();
    test_multiply();
    test_divide();
    test_mod();
    test_power();
    test_fact();
    test_square();
    test_cube();
    test_squareroot();
    test_sinx();
    test_cosx();
    test_tanx();
    test_secx();
    test_cosecx();
    test_cotx();

    return 0;
}
*/
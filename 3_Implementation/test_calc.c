#include "unity.h"
#include "unity_internals.h"
#include<stdlib.h>
#define PROJECT_NAME "scientific_calculator"
/* Prototypes for all the test functions */
/**
 * @brief Testing function for scientific calculator
 * 
 */
extern void test_add();
extern void test_sub();
extern void test_multiply();
extern void test_divide();
extern void test_mod();
extern void test_power();
extern void test_fact();
extern void test_square();
extern void test_cube();
extern void test_squareroot();
extern void test_sinx();
extern void test_cosx();
extern void test_tanx();
extern void test_secx();
extern void test_cosecx();
extern void test_cotx();
//extern void test_example();
/* Required by the unity test framework */
void setUp(void)
{

}
/* Required by the unity test framework */
void tearDown(void)
{

}
/* Start of the application */ 
int main(void)
{
    /* Initiate the unity test framework */
    UNITY_BEGIN();
    /* Run test functions */
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
    RUN_TEST(test_mod);
    RUN_TEST(test_power);
    RUN_TEST(test_fact);
    RUN_TEST(test_square);
    RUN_TEST(test_cube);
    RUN_TEST(test_squareroot);
    RUN_TEST(test_sinx);
    RUN_TEST(test_cosx);
    RUN_TEST(test_tanx);
    RUN_TEST(test_secx);
    RUN_TEST(test_cosecx);
    RUN_TEST(test_cotx);
    //RUN_TEST(test_example);
    /* Close the unity test framework */
    return UNITY_END();
}
    
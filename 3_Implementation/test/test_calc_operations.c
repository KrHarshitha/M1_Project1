#include "unity.h"
#include "calc_operations.h"
#define PROJECT_NAME "SCIENTIFIC CALCULATOR"
/* Prototypes for all the test functions */
/**
 * @brief Testing  functions for add
 * 
 */
void test_add();
/**
 * @brief Testing  functions for sub
 * 
 */
void test_sub();
/**
 * @brief Testing  functions for multiply
 * 
 */
void test_multiply();
/**
 * @brief Testing  functions for divide
 * 
 */
void test_divide();
/**
 * @brief Testing  functions for modulus
 * 
 */
void test_mod();
/**
 * @brief Testing  functions for power
 * 
 */
void test_power();
/**
 * @brief Testing  functions for factorial
 * 
 */
void test_fact();
/**
 * @brief Testing  functions for square
 * 
 */
void test_square();
/**
 * @brief Testing  functions for cube
 * 
 */
void test_cube();
/**
 * @brief Testing  functions for squareroot
 * 
 */
void test_squareroot();
/**
 * @brief Testing  functions for sine
 * 
 */
void test_sinx();
/**
 * @brief Testing  functions for cosine
 * 
 */
void test_cosx();
/**
 * @brief Testing  functions for tangent
 * 
 */
void test_tanx();
/**
 * @brief Testing  functions for secant
 * 
 */
void test_secx();
/**
 * @brief Testing  functions for cosecant
 * 
 */
void test_cosecx();
/**
 * @brief Testing  functions for cotangent
 * 
 */
void test_cotx();
/* Required by the unity test framework */
void setUp()
{

}
/* Required by the unity test framework */
void tearDown()
{

}
/* Start of the application test */
int main()
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
    
    /* Close the unity test framework */
    return UNITY_END;
 
}

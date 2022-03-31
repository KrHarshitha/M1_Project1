#include "unity.h"
#include "sub_integers.h"


void setUp(void)
{
}

void tearDown(void)
{
}

void automated_test_sub_integers()
{
    int expected_sub = 2;
    int result_sub = 0;

    TEST_ASSERT_EQUAL(SUCCESS, sub_integers(0, 0, &result_sub));
    TEST_ASSERT_EQUAL(expected_sub, result_sub);

    TEST_ASSERT_EQUAL(SUCCESS, sub_integers(10, 20, &result_sub));
    TEST_ASSERT_EQUAL(-10, result_sub);

    TEST_ASSERT_EQUAL(SUCCESS, sub_integers(-10, -20, &result_sub));
    TEST_ASSERT_EQUAL(10, result_sub);
    
}

void automated_test_sub_overflow()
{
    int expected_sub = 0;
    int result_sub = 0;
    TEST_ASSERT_EQUAL(OVERFLOW, sub_integers(INT_MAX, 2, &result_sub));   
}

void automated_test_sub_underflow()
{
    int expected_sub = 0;
    int result_sub = 0;
    TEST_ASSERT_EQUAL(UNDERFLOW, sub_integers(INT_MIN, -2, &result_sub));
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(automated_test_sub_integers);
    RUN_TEST(automated_test_sub_overflow);
    RUN_TEST(automated_test_sub_underflow);

    return (UnityEnd());
}
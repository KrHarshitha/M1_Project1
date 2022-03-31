#include "unity.h"

extern void manual_test_sub_integers();

void setUp(void)
{
}

void tearDown(void)
{
}

void automated_test_sub_integers()
{
    TEST_ASSERT_EQUAL(0, sub_integers(0, 0));
    TEST_ASSERT_EQUAL(-10, sub_integers(10, 20));
    TEST_ASSERT_EQUAL(10, sub_integers(-10, -20));
}

void automated_test_sub_overflow()
{
    TEST_ASSERT_EQUAL(0, sub_integers(INT_MAX, 10));
}

void automated_test_sub_underflow()
{
    TEST_ASSERT_EQUAL(0, sub_integers(INT_MIN, -1));
}

int main(void)
{
    manual_test_sub_integers();

    UnityBegin(NULL);

    RUN_TEST(manual_test_sub_integers);

    return (UnityEnd());
}
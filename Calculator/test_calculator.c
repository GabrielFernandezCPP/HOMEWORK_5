#include "unity.h"
#include "calculator.h"

void setUp(void) {

}

void tearDown(void) {

}

//ADD TESTS
void test_add_positive_numbers(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3)); //We expect this to be 5
}

void test_add_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(1, add(5, -4)); //Expect to be 1
}

void test_add_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-7, add(-3, -4)); //Expect to be -7
}

void test_add_zero(void) {
    TEST_ASSERT_EQUAL(10, add(10, 0));
    TEST_ASSERT_EQUAL(0, add(0, 0));
}

void test_add_overflow(void) {
    int result = add(INT_MAX, 1);
    TEST_ASSERT_TRUE(result < 0); //Checks if an overflow occurred
}

void test_add_underflow(void) {
    int result = add(INT_MIN, -1);
    TEST_ASSERT_TRUE(result > 0); //Checks if an underflow has occurred
}





//SUBTRACT TESTS
void test_sub_positive_numbers(void) {
    TEST_ASSERT_EQUAL(1, subtract(3, 2)); //We expect this to be 1
}

void test_sub_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(9, subtract(5, -4)); //Expect to be 9
}

void test_sub_negative_numbers(void) {
    TEST_ASSERT_EQUAL(1, subtract(-3, -4));
}

void test_sub_zero(void) {
    TEST_ASSERT_EQUAL(10, subtract(10, 0));
    TEST_ASSERT_EQUAL(0, subtract(0, 0));
}

void test_sub_overflow(void) {
    int result = subtract(INT_MAX, -1); //Minus by one as subtracting a negative number adds it.
    TEST_ASSERT_TRUE(result < 0); //Checks if an overflow occurred
}

void test_sub_underflow(void) {
    int result = subtract(INT_MIN, 1);
    TEST_ASSERT_TRUE(result > 0); //Checks if an underflow has occurred
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sub_positive_numbers);
    RUN_TEST(test_sub_positive_and_negative_numbers);
    RUN_TEST(test_sub_negative_numbers);
    RUN_TEST(test_sub_zero);
    
    RUN_TEST(test_sub_overflow);
    RUN_TEST(test_sub_underflow);

    return UNITY_END();
}
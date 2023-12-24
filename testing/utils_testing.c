// Author: Isaiah Raspet
#include "testing.h"
#include "utils.h"

int test_equals() {

    char str_1[] = "Hello!";
    char str_2[] = "Hello!";
    char str_3[] = "Bye!";

    //test should fail here if it fails
    assert_true(equals(str_1, str_2, 6, 6));
    assert_zero(equals(str_1, str_3, 6, 4));

    int16_t int_1 = 16;
    int16_t int_2 = 16;
    int16_t int_3 = 8;

    assert_true(equals(&int_1, &int_2, sizeof(int16_t), sizeof(int16_t)));
    assert_zero(equals(&int_1, &int_3, sizeof(int16_t), sizeof(int16_t)));

    return 0;
}

int main(int argc, char **argv) {
    printf("Utilities Tests:\n");

    int (*tests[])() = {&test_equals};

    for ( size_t i = 0; i < 1; ++i ) {
        run_test(tests[i]);
    }
    
    return 0;
}
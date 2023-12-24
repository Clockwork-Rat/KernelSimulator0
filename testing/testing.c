
#include "testing.h"

// NOTE: Assertions may not work as intended at this point

int run_test( int (*func)() ) {
    (*func)();
}

bool assert_true(int value) {
    assert(value != 0);
}

bool assert_equal(void *a, void *b, size_t a_size, size_t b_size) {
    assert(equals(a, b, a_size, b_size) != 0);
}

bool assert_zero(int value) {
    assert(value == 0);
}

bool assert_not_zero(int value) {
    assert(value != 0);
}
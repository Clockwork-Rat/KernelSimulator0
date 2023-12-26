
#include "testing.h"

// NOTE: Assertions may not work as intended at this point -- 
// they currently cause segmentation faults.

int run_test( int (*func)(), size_t *number ) {
  // print test information information
  printf("Test Number %u.\n", *number);
  
  int result = (*func)();
  if (!result) {
    printf("Passed.\n");
  } else {
    printf("Failed.\n");
  }

  ++*number;
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
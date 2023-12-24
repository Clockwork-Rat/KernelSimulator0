// Author: Isaiah Raspet
#ifndef TESTING_H
#define TESTING_H

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <assert.h>
#include "utils.h"

int print_result();
int run_test( int (*func)() );
bool assert_true(int value);
bool assert_equal(void *a, void *b, size_t a_size, size_t b_size);
bool assert_zero(int value);
bool assert_not_zero(int value);

#endif
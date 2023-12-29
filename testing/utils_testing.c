// Author: Isaiah Raspet
#include "testing.h"
#include "utils.h"

int test_str_equals() {

    int result = 0;

    char str_1[] = "Hello!";
    char str_2[] = "Hello!";
    char str_3[] = "Bye!";

    //test should fail here if it fails
    result += assert_true(equals(str_1, str_2, 6, 6));
    result += (equals(str_1, str_3, 6, 4));

    return result;
}

int test_integer_equals() {

    int result = 0;

    int16_t int_1 = 16;
    int16_t int_2 = 16;
    int16_t int_3 = 8;

    result += assert_true(equals(&int_1, &int_2, sizeof(int16_t), sizeof(int16_t)));
    result += assert_zero(equals(&int_1, &int_3, sizeof(int16_t), sizeof(int16_t)));

    return result;
}

int test_floating_point_equals() {

    int result = 0;

    size_t s = sizeof(float);
    
    float f_1 = 4.1f;
    float f_2 = 4.1f;
    float f_3 = 9.3f;

    result += assert_true(equals(&f_1, &f_2, s, s));
    result += assert_zero(equals(&f_1, &f_3, s, s));

    return result;
}

typedef struct test_struct {
  int i;
  float f;
  char c;
} test_struct;

// This does not work, each struct will need bespoke equals methods 
// This makes instruction linked lists impossible
int test_struct_equals() {
  
  test_struct a;
  a.i = -1;
  a.f = 1.1f;
  a.c = 'g';

  test_struct b;
  b.i = -1;
  b.f = 1.1f;
  b.c = 'g';

  test_struct c;
  c.i = -1;
  c.f = 1.1f;
  c.c = 'f';

  size_t s = sizeof(test_struct);

  assert_true(equals(&a, &b, s, s));
  assert_zero(equals(&a, &c, s, s));
  
  return 0;
}

int main(int argc, char **argv) {
    size_t test_number = 0;

    printf("Utilities Tests:\n");

    int (*tests[])() = {
                        &test_str_equals, 
                        &test_integer_equals,
                        &test_floating_point_equals
                        };

    for ( size_t i = 0; i < 3; ++i ) {
        run_test(tests[i], &test_number);
    }
    
    return 0;
}
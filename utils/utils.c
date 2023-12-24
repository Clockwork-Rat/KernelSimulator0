// Author: Isaiah Raspet

#include "utils.h"

bool equals( void *a, void *b, size_t size_a, size_t size_b ) {
  char *a_cast = (char *)a;
  char *b_cast = (char *)b;

  if (size_a != size_b) {
    return false;
  }

  for ( size_t i = 0; i < size_a; ++i ) {
    if ( a_cast[i] != b_cast[i] ) {
        return false;
    }
  }

  return true;
}
#include <cassert>
#include <cstdio>
#include <stdio.h>
#include <stdlib.h>

int get_all_even(int start, int end) {

  int total = 0;
  for (start; start <= end; start++) {

    if (start % 2 == 0) {
      total += start;
    }
  }
  printf("%d \n", total);
  return total;
}

int main() {
  assert(get_all_even(2, 10) == 30);

  assert(get_all_even(3, 9) == 18);
  assert(get_all_even(2, 9) == 20);
  assert(get_all_even(3, 10) == 28);
  assert(get_all_even(4, 4) == 4);
  assert(get_all_even(5, 5) == 0);
  assert(get_all_even(10, 2) == 0);
  assert(get_all_even(-10, -2) == -30);
  assert(get_all_even(-5, 5) == 0);
}

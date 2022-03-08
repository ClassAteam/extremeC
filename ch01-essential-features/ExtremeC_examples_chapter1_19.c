// File name: ExtremeC_exampels_chapter1_19.c
// Description: Example 1.19

#include <stdio.h>

int sum(int a, int b) {
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

int main() {
  int (*f_ptr)(int, int);
  f_ptr = NULL;

  f_ptr = &sum;
  int result = f_ptr(5, 4);
  printf("Sum: %d\n", result);

  f_ptr = &subtract;
  result = f_ptr(5, 4);
  printf("Subtract: %d\n", result);

  return 0;
}

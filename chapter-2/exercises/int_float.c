#include <stdio.h>

int main(void) {

  int unitialized_int;
  int unitialized_int_2;
  int unitialized_int_3;

  float unitialized_float;
  float unitialized_float_2;
  float unitialized_float_3;

  printf("Unitialized integers:\n%d\n%d\n%d\n", unitialized_int,
         unitialized_int_2, unitialized_int_3);
  printf("Unitialized floats:\n%f\n%f\n%f\n", unitialized_float,
         unitialized_float_2, unitialized_float_3);

  return 0;
}

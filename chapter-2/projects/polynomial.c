#include <math.h>
#include <stdio.h>

#define EXPONENT_FOUR 4
#define EXPONENT_FIVE 5

int main(void) {

  int user_provided_variable;

  printf("Provide a value for the variable 'x': ");
  scanf("%d", &user_provided_variable);

  int x_to_power_of_4;

  x_to_power_of_4 = pow(user_provided_variable, EXPONENT_FOUR);

  int x_to_power_of_5;

  x_to_power_of_5 = pow(user_provided_variable, EXPONENT_FIVE);

  printf("%d and %.d\n", x_to_power_of_4, x_to_power_of_5);

  return 0;
}

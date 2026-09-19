#include <stdio.h>

#define TAX_RATE 0.05f

int main(void) {

  float cash_amount;

  printf("Enter a dollar amount (for example, 15.25): ");
  scanf("%f", &cash_amount);

  float taxed_amount = cash_amount * TAX_RATE;

  float full_amount = cash_amount + taxed_amount;

  printf("With tax added: %.2f\n", full_amount);

  return 0;
}

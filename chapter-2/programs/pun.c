#include <stdio.h>

int main(void) {

  char pun[] = "To C, or not to C: that is the question.";
  int pun_chars;

  pun_chars = 42;

  printf("%s\n", pun);
  printf("First character is: %c.\n", pun[0]);
  printf("How many characters are in the pun?\n");
  printf("%d\n", pun_chars);

  return 0;
}

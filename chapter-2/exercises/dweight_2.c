#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {

  int height = 8, length = 12, width = 10, volume;

  printf("Height is %d\n", height);
  printf("Length is %d\n", length);
  printf("Width is %d\n", width);

  volume = height * length * width;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n",
         (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

  return 0;
}

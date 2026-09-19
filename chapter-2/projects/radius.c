#include <stdio.h>

#define PI 3.14159
#define FRACTION_VOLUME 4.0f / 3.0f

int main(void) {

  int radius;

  printf("Enter sphere's radius in meters: ");
  scanf("%d", &radius);

  float volume;

  volume = FRACTION_VOLUME * PI * (radius * radius * radius);

  printf("The volume of a sphere with a 10-meter radius is %f\n", volume);

  return 0;
}

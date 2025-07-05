// 36. area of a circle

#include <stdio.h>

int main() {
  float r, pi = 3.1416;

  printf("Radius of the circle: ");
  scanf("%f", &r);

  float area = pi * r * r;

  printf("Area of the circle: %.2f\n", area);
}

// F = 9 / 5 * C + 32

#include <stdio.h>

int main() {
  float f, c;

  printf("Enter celcius value: ");
  scanf("%f", &c);

  if (c < 0) {
    printf("Negative temaprature is not allowed!");
  } else {
    f = 9.0 / 5.0 * c + 32.0;
    printf("%.2f C = %.2f F", c, f);
  }

  return 0;
}

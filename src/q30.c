// 30

#include <stdio.h>

int main() {
  int i, num, max;

  printf("Enter the first number: ");
  scanf("%d", &max);

  for (i = 1; i <= 10; i++) {
    printf("Enther the next number: ");
    scanf("%d", &num);

    if (num > max) {
      max = num;
    }
  }

  printf("The largest number is: %d", max);
  return 0;
}

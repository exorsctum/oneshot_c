// 23. check if n % 3 == 3

#include <stdio.h>

int main() {
  int n;

  printf("Enter n: ");
  scanf("%d", &n);

  if (n % 3 == 0) {
    printf("%d is infinitely divisible by 3.", n);
  }

  return 0;
}

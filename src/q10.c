// 3^2 + 6^2 + 9^2 + ... + n^2

#include <stdio.h>

int main() {
  int i, n, sum = 0;

  printf("Enter n: ");
  scanf("%d", &n);

  for (i = 3; i <= n; i += 3) {
    sum += i * i;
  }

  printf("Sum: %d\n", sum);
  return 0;
}

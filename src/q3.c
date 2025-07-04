// 1 * 2 * 3 * ... * n

#include <stdio.h>

int main() {
  int i, n;
  int sum = 1;

  printf("Enter n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    sum *= i;
  }

  printf("%d", sum);
  return 0;
}

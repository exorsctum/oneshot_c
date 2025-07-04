// 16. 2 + 6 + 9 + ... + n

#include <stdio.h>

int main() {
  int n, sum = 0;
  int i = 3;

  printf("Enter n: ");
  scanf("%d", &n);

  do {
    sum += i;
    i += 3;
  } while (i <= n);

  printf("Sum: %d", sum);
  return 0;
}

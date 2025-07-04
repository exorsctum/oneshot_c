// rewrite the given program with while loop

#include <stdio.h>

int main() {
  int n, i, s = 0;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  while (i <= n) {
    s = s + i * (i + 1);
    i++;
  }

  printf("Sum = %d\n", s);

  getchar();
  return 0;
}

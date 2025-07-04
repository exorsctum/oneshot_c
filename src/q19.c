// 19. sample input and output: 5 -> 120. Basically, facotiral calculator.

#include <stdio.h>

int main() {
  int n;
  int fact = 1;

  printf("Enter n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    fact *= i;
  }

  printf("!%d = %d", n, fact);
}

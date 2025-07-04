// 9^2 + 12^2 + 15^2 + ... + 90^2

#include <stdio.h>

int main() {
  int i;
  int sum = 0;
  int n = 90;

  for (i = 9; i <= n; i += 3) {
    sum += i * i;
  }

  printf("%d", sum);
  return 0;
}

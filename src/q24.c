// 24. rewrite the code with do...while loop

#include <stdio.h>

int main() {
  int k, s = 0;

  for (k = 10; k <= 100; k += 10) {
    s += k;
  }

  printf("Summation: %d", s);
  return 0;
}

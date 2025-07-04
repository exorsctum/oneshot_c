// 26. 2^2 + 5^2 + 8^2 + ... + n^2

#include <stdio.h>

int main() {
  int i, s = 0;
  int counter = 1;

  for (i = 2; counter <= 10; i += 3) {
    s += i * i;
    counter++;
  }

  printf("Sum: %d", s);
  return 0;
}

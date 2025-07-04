// 15. rewrite the program with do...while loop

#include <stdio.h>

int main() {
  int a = 2;
  int s = 0;

  do {
    s = s + a;
    a += 2;
  } while (a <= 100);

  printf("%d", s);
  return 0;
}

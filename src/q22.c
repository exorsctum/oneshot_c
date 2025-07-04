// 22. rewrite the given program using do...while and while loop

#include <stdio.h>

int main() {
  int a, b = 0;

  a = 5;
  do {
    b += a;
    a += 5;
  } while (a <= 100);

  printf("%d", b);
  return 0;
}

/*
#include <stdio.h>

int main() {
  int a, b = 0;

  while (a <= 100) {
    b += a;
    a += 5;
  }

  printf("%d", b);
  return 0;
}

*/

// rewrite the program with do...while loop

#include <stdio.h>

int main() {
  int i = 3;
  int s = 0;

  do {
    s = s + 1;
    i += 4;
  } while (i <= 100);

  printf("Sum = %d\n", s);
  getchar();
  return 0;
}

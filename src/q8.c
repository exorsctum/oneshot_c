// rewrite/implement the given program with while loop

#include <stdio.h>

int main() {
  int sum = 0;
  int i = 1;

  while (i <= 10) {
    sum += i;
    i++;
  }

  printf("Summation = %d", sum);
  return 0;
}

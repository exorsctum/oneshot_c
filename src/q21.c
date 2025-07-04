// 21. prime numbers from 1 to 30

#include <stdio.h>

int main() {
  int num;

  for (num = 1; num <= 30; num++) {
    int factor_count = 0;

    for (int i = 1; i <= num; i++) {
      if (num % i == 0) {
        factor_count++;
      }
    }

    if (factor_count == 2) {
      printf("Prime number found: %d\n", num);
    }
  }

  return 0;
}
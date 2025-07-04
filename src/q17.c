// 17. 1 + 4 + 7 + ... + 40

#include <stdio.h>

int main() {
  int i;
  int even_sum = 0;
  int odd_sum = 0;

  for (i = 1; i <= 40; i += 3) {
    if (i % 2 == 0) {
      even_sum += i;
    } else {
      odd_sum += i;
    }
  }

  printf("Even sum: %d\nOdd Sum: %d", even_sum, odd_sum);
  return 0;
}

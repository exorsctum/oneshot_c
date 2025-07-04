// sum for 7, 10, 45, 20, 51, 23

#include <stdio.h>

int main() {
  int nums[6] = {7, 10, 45, 20, 51, 23};
  int sum = 0;

  for (int i = 0; i <= 5; i++) {
    sum += nums[i];
  }

  printf("Sum of array: %d\n", sum);
  return 0;
}

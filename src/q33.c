// 33

#include <stdio.h>

int main() {
  int s;
  int n;

  for (int i = 0; i <= 2; i++) {
    printf("Enter a number: ");
    scanf("%d", &n);
    s += n;
  }

  printf("Sum: %d", s);
  return 0;
}

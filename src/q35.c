// 35. use prtinf() only once

#include <stdio.h>

int main() {
  int a, b, c;
  int largest;

  printf("Enter all the numbers seperated by single space: ");
  scanf("%d %d %d", &a, &b, &c);

  if (a > c) {
    largest = a;
  } else {
    largest = c;
  }

  if (c > largest) {
    largest = c;
  }

  printf("Largest number %d\n", largest);
  return 0;
}

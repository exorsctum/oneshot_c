// if input % 5 == 0 : 'Flower'; else if input % 7 == 0 : River;
// if input % both == 0 : 'Good'

#include <stdio.h>

int main() {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n % 5 == 0 && n % 7 == 0) {
    printf("Good");
  } else if (n % 7 == 0) {
    printf("River");
  } else if (n % 5 == 0) {
    printf("Flower");
  }

  return 0;
}

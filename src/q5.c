// if y % 400 == 0 : not leap; else if y % 400 != 400 and y % 4 == 0 : leap;
// NB: the give process in the question is ineffecient, but who cares!

#include <stdio.h>

int main() {
  int y;

  printf("Enter year: ");
  scanf("%d", &y);

  if (y % 400 == 0) {
    printf("Not leap year.");
  } else if (y % 400 != 0 && y % 4 == 0) {
    printf("Leap year.");
  }

  return 0;
}

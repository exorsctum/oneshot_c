// 27

#include <stdio.h>

int main() {
  int total = 1000;
  int fish = 200;
  int meat = (fish * 3) + 50;
  int book = 50;

  int change = total - (fish + meat + book);

  printf("Ramiz was left with %d BDT", change);
  return 0;
}

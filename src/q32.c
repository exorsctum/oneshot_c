// 32

#include <stdio.h>

int main() {
  int son;

  printf("Enter age for son: ");
  scanf("%d", &son);

  int mother = son * 3;
  int father = mother + 5;

  printf("Total age: %d", son + father + mother);
}

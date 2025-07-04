// 18. show string "SMART" for n times

#include <stdio.h>

int main() {
  int n;
  char msg[5] = "SMART";

  printf("Times to show the string: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf("%s\n", msg);
  }

  return 0;
}

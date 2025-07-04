// 28. rewrite the code with goto

#include <stdio.h>

int main() {
  int n, i, s = 0;

  printf("Enter last number: ");
  scanf("%d", &n);

  i = 10;

loop:
  if (i > n)
    goto end;

  s += i;
  i += 10;

  goto loop;

end:
  printf("Sum = %d", s);
}

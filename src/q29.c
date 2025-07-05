// 29. 90^2 + 80^2 + 70^2 + ... + 20^2

#include <stdio.h>

int main() {
  int i, s = 0;

  i = 90;
loop:
  if (i < 20)
    goto end;
  s += i * i;
  i -= 10;

end:
  printf("Sum: %d", s);
}

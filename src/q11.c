// 1-50 : A; 51-100 : B; 101-200 : C;

#include <stdio.h>

int main() {
  int n;

  printf("Enter your roll no: ");
  scanf("%d", &n);

  if (n >= 1 && n <= 50) {
    printf("A");
  } else if (n >= 51 && n <= 100) {
    printf("B");
  } else {
    printf("C");
  }
}

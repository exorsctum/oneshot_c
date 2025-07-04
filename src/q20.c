// 20. ke beshi run korse?

#include <stdio.h>

int main() {
  int sakib = 80;
  int musfik = 90;
  int tamim = 95;

  if (sakib > musfik && sakib > tamim) {
    printf("Sakib");
  } else if (musfik > sakib && musfik > tamim) {
    printf("Musfik");
  } else {
    printf("Tamim");
  }
}

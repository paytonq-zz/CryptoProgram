#include "encrypt.h"
#include <stdio.h>
long key;
int c;

void encrypt() {
  printf("Enter Public Key: ");
  scanf("%lx", &key);
  printf("Enter message to encrypt: ");
  c = getchar();
  while ((c = getchar()) != 10) {
    printf("%lx ",(c*c*c) % key);
  }
  printf("\n");
}

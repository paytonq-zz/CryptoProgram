#include "modPow.h"
#include "decrypt.h"
#include <stdio.h>
long key1, es, next;
int i, newInt;
char newChar;

void decrypt(int argc, char *argv[]) {
  if (argc > 2) {
    printf("Enter Public Key: ");
    scanf("%lx", &key1);
    printf("Enter Private Key: ");
    scanf("%lx", &es);
    for (i = 2; i < argc; i++) {
      next = strtol(argv[i], NULL, 16);
      newInt = (int)modPow(next,es,key1);
      if (key1 < 255) {
	newInt += key1;
      }
      newChar = newInt;
      printf("%c", newChar);
    }	 
    printf("\n");
  } else {
    printf("You didn't enter anything to decrypt, please try again using the following format:\n");
    printf("decrypt {text to decrypt here}\n");
  }
}




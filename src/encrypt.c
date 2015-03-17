/*
 * Copyright (c) 2014, 2015 Payton Quinn
 * Distributed under the MIT License
 * (See accompanying file LICENSE or copy at
 * http://opensource.org/licenses/MIT)
 */


#include "encrypt.h"
#include <stdio.h>
long key;
int c;


// Prompts the user for a public key and plaintext to be encrypted and then
// encrypts that plaintext using the public key.
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

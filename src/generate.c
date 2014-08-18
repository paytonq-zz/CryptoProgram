/*
 * Copyright (c) 2014 Payton Quinn
 * Distributed under the MIT Licnese
 * (See accompanying file LICENSE or copy at
 * http://opensource.org/licenses/MIT)
 */

#include <time.h>
#include <stdio.h>

long prime1, prime2, n, s;

// Generates and prints a public/private keypair.
void generate() {
  srand(time(NULL) + clock());
  prime1 = (rand() % 10000) + 36340;
  prime1 = checkValue(prime1);
  prime2 = (rand() % 10000) + 36340;
  prime2 = checkValue(prime2);
  n = prime1*prime2;
  s = ((2*(prime1-1)*(prime2-1))+1)/3;
  printf("Public Key: %lx\n", n);
  printf("Private Key: %lx\n", s);
}

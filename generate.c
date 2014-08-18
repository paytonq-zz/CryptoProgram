#include <time.h>
#include <stdio.h>

long prime1, prime2, n, s;

void generate() {
  srand(time(NULL) + clock());
  prime1 = (rand() % 10000) + 36340;
  // printf("Enter a prime where p = 2 (mod 3): ");
  // scanf("%li", &prime1);
  prime1 = checkValue(prime1);
  // printf("Enter another prime where p = 2 (mod 3): ");
  // scanf("%li", &prime2);
  prime2 = (rand() % 10000) + 36340;
  prime2 = checkValue(prime2);
  n = prime1*prime2;
  s = ((2*(prime1-1)*(prime2-1))+1)/3;
  printf("Public Key: %lx\n", n);
  // printf("p: %li\n", prime1);
  // printf("q: %li\n", prime2);
  printf("Private Key: %lx\n", s);
}

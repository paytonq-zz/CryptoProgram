#include "checkValue.h"
#include <time.h>
int prime;
int correct;

long checkValue(long input) {
  prime = 1;
  correct = 1;
  while (prime || correct) {
    //if (isPrime(input) == 0) {
    // printf("The number you have entered is not prime, please try again: ");
    // scanf("%li",&input); 
    //} else if (isCorrectMod(input) == 0) {
      // printf("The prime you have entered mod 3 is not 2, please try again: ");
      //scanf("%li",&input);
    
    // }
    if (isPrime(input) == 0 || isCorrectMod(input) == 0) {
      input = (rand() % 10000) + 36340;
    }
    prime = !isPrime(input);
    correct  = !isCorrectMod(input);
  }
  return input;
}
int isPrime(long number) {
  unsigned long num = number;
  if (number <= 1) 
    return 0; 
  unsigned int i;
  for (i=2; i*i<=num; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

int isCorrectMod(long number) {
  return number % 3 == 2;
}

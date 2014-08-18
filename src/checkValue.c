/*
 * Copyright (c) 2014 Payton Quinn
 * Distributed under the MIT License
 * (See accompanying file LICENSE or copy at
 * http://opensource.org/licenses/MIT)
 */


#include "checkValue.h"
#include <time.h>
int prime;
int correct;

// Verifies that the randomly generated number that it is passed fulfills the criteria 
// for use in creating a keypair. If it does, it is returned. If it doesn't, a new number 
// is generated and returned.
long checkValue(long input) {
  prime = 1;
  correct = 1;
  while (prime || correct) {
    if (isPrime(input) == 0 || isCorrectMod(input) == 0) {
      input = (rand() % 500) + 30;
    }
    prime = !isPrime(input);
    correct  = !isCorrectMod(input);
  }
  return input;
}

// Returns a value indicating whether or not the value passed to it is prime.
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

// Returns a value indicating whether or not the value passed to it mod 3
// equals 2.
int isCorrectMod(long number) {
  return number % 3 == 2;
}

/*
 * Copyright (c) 2014 Payton Quinn
 * Distributed under the MIT Licnese
 * (See accompanying file LICENSE or copy at
 * http://opensource.org/licenses/MIT)
 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "decrypt.h"
#include "encrypt.h"
#include "generate.h"
void printInfo();

// Is passed an argument count and an array of arguments.  If one of the correct arguments
// of generate, encrypt, or decrypt is passed, then the program runs according to 
// the argument that was entered.  Otherwise, license, description, and
// documentation information is displayed.  
main(int argc, char *argv[]) 
{ 
  if (argc > 1 && strcmp(argv[1],"generate") == 0) {
    generate();
  } else if (argc > 1 && strcmp(argv[1],"encrypt") == 0) {
    encrypt();
  } else if (argc > 1 && strcmp(argv[1],"decrypt") == 0) {
    decrypt(argc, argv);
  } else {
    printInfo();
  }
}

void printInfo() {
    printf("\nCopyright (c) 2014 Payton Quinn\n\n");
    printf("Permission is hereby granted, free of charge, to any person obtaining a copy \n");
    printf("of this software and associated documentation files (the \"Software\"), to deal \n");
    printf("in the Software without restriction, including without limitation the rights \n");
    printf("to use, copy, modify, merge, publish, distribute, sublicense, and/or sell \n");
    printf("copies of the Software, and to permit persons to whom the Software is \n");
    printf("furnished to do so, subject to the following conditions: \n\n");
    printf("The above copyright notice and this permission notice shall be included in \n");
    printf("all copies or substantial portions of the Software. \n\n");
    printf("THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR \n");
    printf("IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, \n");
    printf("FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE \n");
    printf("AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER \n");
    printf("LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, \n");
    printf("OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN \n");
    printf("THE SOFTWARE.\n\n\n");
    printf("This program is a C implementation of something similar to the version of RSA \n");
    printf("taught in CSE 311 at the University of Washington. ");
    printf("It uses an implementation\nthat has an exponent of 3 and uses primes that are too small, rendering it\ninsecure. ");
    printf("The powerpoint for the lecture upon which this program is based can\nbe accessed ");
    printf("at http://www.cs.washington.edu/homes/tompa/papers/rsa311.pptx\n");
    printf("\n\n");
    printf("For documentation and instructions on using this program, please visit \n");
    printf("https://github.com/paytonq/CryptoProgram\n\n");
}
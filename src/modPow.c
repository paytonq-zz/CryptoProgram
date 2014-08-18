#include "modPow.h"


// Taken from page 244 of Bruce Schneier's Applied Cryptography, 2e, ISBN 0-471-11709-9.
long modPow(long b, long e, long m) {
    long result = 1;

    while (e > 0) {
        if ((e & 1) == 1) {=
            result = (result * b) % m;
        }
        b = (b * b) % m;
        e >>= 1;
    }

    return result;
}

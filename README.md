# CryptoProgram


This is a C implementation of something similar to the version of RSA taught in CSE 311.  I created it both to learn how to write in C and as an experiment in implementing an encryption algorithm.  The version of RSA used by this program uses an exponent of 3, and uses primes that are too small, rendering it insecure.  It also doesn't have any padding, although I am considering adding this in the future.



## Arguments

* To generate a public / private key pair:
  * `$ ./CryptoProgram generate`

* To encrypt text using the public key:
  * `$ ./CryptoProgram encrypt`

* To decrypt text using the public and private keys:
  * `$ ./CryptoProgram decrypt {text to decrypt here}`

## Example

	$ ./CryptoProgram generate
	Public Key: 74ce0603
	Private Key: 4dddc81b
	$ ./CryptoProgram encrypt
	Enter Public Key: 74ce0603
	Enter message to encrypt: Hello, world!
	5b200 fb89d 1338c0 1338c0 14de4f 14cc0 8000 19b6a7 14de4f 169b48 1338c0 f4240 8c61
	$ ./CryptoProgram decrypt 5b200 fb89d 1338c0 1338c0 14de4f 14cc0 8000 19b6a7 14de4f 169b48 1338c0 f4240 8c61
	Enter Public Key: 74ce0603
	Enter Private Key: 4dddc81b
	Hello, world!   




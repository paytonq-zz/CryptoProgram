# CryptoProgram


This is a C implementation of something similar to the version of RSA taught in CSE 311.  I created it both to learn how to write in C and as an experiment in implementing an encryption algorithm.  The version of RSA used by this program uses an exponent of 3 and uses primes that are too small, rendering it insecure.  It also doesn't have any padding, although I am considering adding this in the future.

For more information about the version of RSA used here: http://www.cs.washington.edu/homes/tompa/papers/rsa311.pptx

## Arguments

* To generate a public / private key pair:
  * `$ ./CryptoProgram generate`

* To encrypt text using the public key:
  * `$ ./CryptoProgram encrypt`

* To decrypt text using the public and private keys:
  * `$ ./CryptoProgram decrypt {text to decrypt here}`

## Example

	$ ./CryptoProgram generate
	Public Key: 14fb
	Private Key: d8b
	$ ./CryptoProgram encrypt
	Enter Public Key: 14fb
	Enter message to encrypt: Hello, world!
	a59 1158 b52 b52 d45 120b 21e fc4 d45 11a7 b52 3e2 e7f 
	$ ./CryptoProgram decrypt a59 1158 b52 b52 d45 120b 21e fc4 d45 11a7 b52 3e2 e7f 
	Enter Public Key: 14fb
	Enter Private Key: d8b
	Hello, world!
 




CC=gcc
CFLAGS=-I.

CryptoProgram: main.o checkValue.o modPow.o generate.o encrypt.o decrypt.o 
	$(CC) -o CryptoProgram main.o checkValue.o modPow.o generate.o encrypt.o decrypt.o 

clean: 
	rm main.o checkValue.o modPow.o generate.o encrypt.o decrypt.o CryptoProgram
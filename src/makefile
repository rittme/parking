CC=g++

INCLUDES=-I/shares/public/tp/tp-multitache

CPFLAGS=-Wall -Wno-write-strings -std=c++11 $(INCLUDES)
LDFLAGS=-L/shares/public/tp/tp-multitache

Parking: Parking.o
	$(CC) $(LDFLAGS) -o ../bin/Parking Parking.o
	rm *.o

Parking.o: 
	$(CC) $(CPFLAGS) -c Parking.cpp

clear:
	rm *.o ../bin/*

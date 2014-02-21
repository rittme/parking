CC=g++
CPFLAGS=-Wall -Wno-write-strings -std=c++11
CPLIBS=

Parking: Parking.o
	
	$(CC) $(CPFLAGS) $(CPLIBS) -o ../bin/Parking parking.o
	rm *.o

clear:
	rm *.o ../bin/*

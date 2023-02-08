CC = g++
CFLAGS = -Wall -g


main: main.o Cube.o Stack.o
	$(CC) $(CFALGS) -o main main.o Cube.o Stack.o
main.o: main.cpp Cube.h Stack.h
	$(CC) $(CFLAGS) -c main.cpp

Stack.o: Stack.h
Cube.o: Cube.h

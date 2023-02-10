CC = g++
CFLAGS = -Wall -g


main: main.o Game.o Stack.o Cube.o 
	$(CC) $(CFALGS) -o main main.o Game.o Stack.o Cube.o 
main.o: main.cpp Game.h Stack.h Cube.h 
	$(CC) $(CFLAGS) -c main.cpp

Game.o: Game.h Stack.h
Stack.o: Stack.h Cube.h
Cube.o: Cube.h

CC = g++
CFLAGS = -Wall -g


main: main.o Cube.o
	$(CC) $(CFALGS) -o main main.o Cube.o
main.o: main.cpp Cube.h
	$(CC) $(CFLAGS) -c main.cpp

cube.o: Cube.h

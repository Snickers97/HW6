CC = g++
CCFLAGS = -Wall -g

all: build archive
	make build
	make archive

archive:
	tar -czf archive .

build: main.o game.o othello.o
	$(CC) $(CCFLAGS) -o game main.o game.o othello.o 

main.o: main.cc
	$(CC) $(CCFLAGS) -c main.cc
https://github.com/Snickers97/HW6
game.o: game.cc game.h
	$(CC) $(CCFLAGS) -c game.cc

othello.o: othello.cc othello.h
	$(CC) $(CCFLAGS) -c othello.cc

clean:
	rm *.o game archive

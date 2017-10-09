#CS3560 Makefile
#HW 6
all: game othello.o game.o main.o tar
game: othello.o game.o main.o
	g++ -o game othello.o game.o main.o
othello.o: othello.h othello.cc
	g++ -c othello.cc
game.o: game.h game.cc
	g++ -c game.cc
main.o: main.cc
	g++ -c main.cc

clean:
	-rm -f *.o core *.core game
tar:
	tar cvzf hw6.tar.gz colors.h game.cc game.h main.cc makefile othello.cc othello.h piece.h



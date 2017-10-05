// Brock Ferrell
// CS2401
// November 23, 2015
// Project7
//Edited by Jacob Handley 10/5/2017 

#include "game.h"
#include "othello.h"
using namespace main_savitch_14;


int main()
{
	///Creates an Othello class called theGame
	Othello theGame;

	///Resets the game and returns all pieces to the starting position
	theGame.restart();

	///Starts the main loop that runs until the game is over
	theGame.play();
}

// Brock Ferrell
// CS2401
// November 23, 2015
// Project7

///Provides the Piece class that determines behavior of game pieces

#ifndef PIECE_H
#define PIECE_H
enum color {black, white, blank};

//! piece class
/*!
	This class stores the information for an individual piece
	on the othello board, which is created as a two-dimensional
	array in the othello class.
*/
class piece {
public:
	piece() {theColor = blank;}

//! flip function
/*!
	Changes the private variable theColor to either black or white.
	In the game display, this will change the color of the piece and
	give a point to the other player.
*/
	void flip()
	{
		if (theColor == white) {
			theColor = black;
		}
		else if (theColor == black) {
			theColor = white;
		}
	}

	bool is_blank()const {return theColor == blank;}
	bool is_black()const {return theColor == black;}
	bool is_white()const {return theColor == white;}
	void set_white() {theColor = white;}
	void set_black() {theColor = black;}

private:
	color theColor;

};

#endif


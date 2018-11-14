#include "Functions.h"
#include "Functions.cpp"

/**
 * DESCRIPTION: This program is a textbased minesweeper game, with a gameboard the size of 9x9
 *
 * AUTHOR: Petter "Despacitrus" Johansson
 *
 * DATE CREATED (yymmdd): 181002
 * DATE EDITED (yymmdd):
 *
 * COPYRIGHT: yes.
 *
 * PSEUDO CODE (FOR DEVELOPER):
 *
 * CREATE ARRAY WITH 81 PLACES
 * GET 10 SHUFFLED ARRAY INDEXES
 * CHECK IF INDEX ALREADY HAS MINE
 * PLACE 10 MINES IN 9X9 BOARD AREA
 * WHILE TILES LEFT KEEP LOOPING
 * PRESENT GAMEBOARD
 * ENTER BOARD COORDINATE FOR SELECTING TILE
 * CLEAR SCREEN
 * LOOK FOR WHICH TILES IS CLOSE
 * CHECK THE SPECIAL CASES IN BORDERS OF BOARD
 * CHECK FOR EVERY OTHER TILE
 * IF TILE CONTAIN MINE END GAME, RETURN 0
 * CLEAR SCREEN
 * SHOW RESAULT
*/

int main(){
	int width = 9, height = 9;
	int arraySize = width * height;
	int gameMap[arraySize] = {0};

	CreateMap(gameMap, width, height);

	return 0;
}
#include "Command.h"

Command::Command(){
	challenge = new Board;
	rowNumber = 0;
	colNumber = 0;
	value = '0';
}

Command::Command(int row, int col, char val, Board* chlg){
	challenge = chlg;
	rowNumber = row;
	colNumber = col;
	value = val;
	
}

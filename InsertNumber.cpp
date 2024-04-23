#include "InsertNumber.h"

InsertNumber::InsertNumber(){
	std::cout << "Object is created form Insert Number" << std::endl;
}

InsertNumber::InsertNumber(int row, int col, char val, Board* chlg){
	challenge = chlg;
	rowNumber = row;
	colNumber = col;
	value = val;
}

void InsertNumber::undo(){
	challenge->setValue(rowNumber, colNumber, '0');
}

void InsertNumber::execute(){
	challenge->setValue(rowNumber, colNumber, value);
}

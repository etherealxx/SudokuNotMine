#include "RemoveNumber.h"
RemoveNumber::RemoveNumber() {
	std::cout << "Object is created from Remove Number" << std::endl;
}

RemoveNumber::RemoveNumber(int row, int col, char val, Board* chlg) {
	challenge = chlg;
	rowNumber = row;
	colNumber = col;
	value = val;
}

void RemoveNumber::undo() {
	challenge->setValue(rowNumber, colNumber, value);
}

void RemoveNumber::execute() {
	challenge->setValue(rowNumber, colNumber, '0');
}
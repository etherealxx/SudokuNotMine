#pragma once
#include "Command.h"
class InsertNumber : public Command{

	private:
		Board* challenge = NULL;
		int rowNumber = 0;
		int colNumber = 0;
		char value = '0';

	public:
		InsertNumber();
		InsertNumber(int row, int col, char val, Board* chlg);
		void undo();
		void execute();
};


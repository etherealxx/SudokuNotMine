#pragma once
#include "GameManager.h"

class Command{
	private:
		Board *challenge;
		int rowNumber;
		int colNumber;
		char value;

	public:
		Command();
		Command(int row, int col , char val, Board* chlg);
		virtual void undo()=0;
		virtual void execute()=0;
};


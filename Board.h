#pragma once
#include <vector>
#include "Cell.h"
#include <iostream>

class Board{
	private:
        std::vector < std::vector < Cell >> cells;

	public:
        Board();
        void setValue(int row, int col, char val);
        char getValue(int row, int col);

        void setFixed(int row, int col, bool fix);
        bool isFixed(int row, int col);

        bool isFull();

        void reset();
        void printBoard();

        bool checkVertical(int col, char val);
        bool checkHorizontal(int row, char val);
        bool checkRegional(int row, int col, char val);
        
        std::vector<std::vector<Cell>> getBoard();
};


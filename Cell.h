#pragma once
class Cell{
	private:
		char value;
		bool fixed;

	public:
		Cell();
		char getValue();
		void setValue(char val);
		bool isFixed();
		void setFixed(bool fix);

};


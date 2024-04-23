#pragma once
#include <string>

class Player{

	private:
		std::string username;
		int winCount;

	public:
		Player();
		Player(std::string uname, int winCount);
		void setUsername(std::string name);
		void setWinCount();

		std::string getUsername();
		int getWinCount();
};


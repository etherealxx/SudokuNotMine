#include "Player.h"

Player::Player(){
	username = "default";
	winCount = 0;
}

Player::Player(std::string uname, int win){
	username = uname;
	winCount = win;
}

void Player::setUsername(std::string name){
	username = name;
}

void Player::setWinCount(){
	winCount++;
}

std::string Player::getUsername(){
	return username;
}

int Player::getWinCount(){
	return winCount;
}

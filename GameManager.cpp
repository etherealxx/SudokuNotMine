#include "GameManager.h"

GameManager::GameManager(std::string lvl, Player plyr){
	ChallengeFactory challengeFactory;
	level = lvl;
	player = plyr;
	challenge = challengeFactory.getChallenge(level)->loadChallenge();
}

void GameManager::setLevel(std::string lvl){
	ChallengeFactory challengeFactory;
	challenge = challengeFactory.getChallenge(level)->loadChallenge();
}

void GameManager::setPlayer(Player plyr){
	player = plyr;
}

Board GameManager::getBoard(){
	return challenge;
}

Player GameManager::getPlayer(){
	return player;
}

std::string GameManager::getLevel(){
	return level;
}

void GameManager::insertNumber(int rowNumber, int colNumber, char val){
		challenge.setValue(rowNumber, colNumber, val);
}

void GameManager::removeNumber(int rowNumber, int colNumber){
		challenge.setValue(rowNumber, colNumber, '0');
}

bool GameManager::isWin(){
	if (challenge.isFull() == true)
		return true;
	else
		return false;
}

bool GameManager::isAvailable(int rowNumber, int colNumber, char val){
	if (challenge.isFixed(rowNumber,colNumber) == true)
		return false;
	if (challenge.checkVertical(colNumber, val) == false || challenge.checkHorizontal(rowNumber, val) == false || challenge.checkRegional(rowNumber, colNumber, val) == false) {
		return false;
	}
	return true;
}

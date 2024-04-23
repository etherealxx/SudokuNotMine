#include "Medium.h"

Board Medium::loadChallenge(){
	ChallengeLoader cl;

	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> distribution(1, 3);
	int randomNumber = distribution(gen);

	std::string challenge = std::to_string(randomNumber);
	std::string path = "D:/Repositories/Sudoku/Challenge/Medium/" + challenge + ".txt";

	return cl.readFileToBoard(path);
}

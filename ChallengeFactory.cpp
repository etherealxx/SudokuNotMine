#include "ChallengeFactory.h"

Challenge *ChallengeFactory::getChallenge(std::string level){

	Challenge* output = NULL;

	std::string input = "";

	for (char& c : level) {
		c = std::tolower(static_cast<unsigned char>(c));
		input = input + c;
	}

	if (input == "easy") {
		output = new Easy;
	}
	else if (input == "medium") {
		output = new Medium;
	}
	else if (input == "hard") {
		output = new Hard;
	}

	return output;
	
}

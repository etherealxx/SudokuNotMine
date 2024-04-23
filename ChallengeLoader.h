#pragma once
#include "Board.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class ChallengeLoader{

	public:
		Board readFileToBoard(const std::string& filename);
};


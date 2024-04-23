#pragma once
#include "Board.h"
#include "Challenge.h"
#include <algorithm> 
#include "Easy.h"
#include "Medium.h"
#include "Hard.h"

class ChallengeFactory{
	public:
		Challenge *getChallenge(std::string level);
};


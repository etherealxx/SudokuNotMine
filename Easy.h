#pragma once
#include "Challenge.h"
#include <random>
#include "ChallengeLoader.h"

class Easy : public Challenge{
	public:
		Board loadChallenge();
};


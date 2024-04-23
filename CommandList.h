#pragma once
#include "Command.h"
#include "InsertNumber.h"
#include "RemoveNumber.h"
#include <stack>
class CommandList{
	private:
		std::stack <Command*> commandList;
	public:
		void PutCommand(Command *input);
		Command* takeCommand();
};


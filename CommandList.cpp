#include "CommandList.h"

void CommandList::PutCommand(Command* input){
	commandList.push(input);
}

Command* CommandList::takeCommand(){
	Command* output = commandList.top();
	commandList.pop();
	return output;
}



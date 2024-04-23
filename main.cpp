// Sudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameManager.h"
#include "Player.h"
#include "Command.h"
#include "InsertNumber.h"
#include "RemoveNumber.h"
#include "CommandList.h"
#include "Easy.h"

int main(){
	Player a;
	ChallengeFactory g;
	Board b = g.getChallenge("easy")->loadChallenge();
	Board *h = &b;
	std::cout << "Board asli " << std::endl << std::endl;
	h->printBoard();
	
	GameManager newGame("medium", a);
	InsertNumber one(1, 2, '3', h);
	Command *c = & one;

	RemoveNumber two(0, 2, h->getValue(0, 2), h);
	Command* d = &two;

	CommandList newCommand;
	newCommand.PutCommand(c);
	newCommand.PutCommand(d);

	Command* e = newCommand.takeCommand();
	e->execute();
	std::cout << "Execute " << std::endl << std::endl;
	h->printBoard();
	e->undo();
	std::cout << "Undo " << std::endl << std::endl;
	h->printBoard();

	std::cout << "Board asli " << std::endl << std::endl;

	e = newCommand.takeCommand();
	e->execute();
	std::cout << "Execute " << std::endl << std::endl;
	h->printBoard();
	e->undo();
	std::cout << "Undo " << std::endl << std::endl;
	h->printBoard();

	/*newGame.getBoard().printBoard();
	newGame.insertNumber(0,0,'9');
	std::cout << std::endl << std::endl;
	newGame.getBoard().printBoard();
	std::cout << std::endl << std::endl;
	newGame.removeNumber(0,0);
	newGame.getBoard().printBoard();*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

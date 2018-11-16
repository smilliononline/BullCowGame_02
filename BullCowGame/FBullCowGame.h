#pragma once
#include <string>

class FBullCowGame
{
public:
	FBullCowGame(); // Constructor

	void Reset(); //TODO make a more rich return value
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::pmr::string);  //TODO make a more rich return value


private:
	int MyCurrentTry;
	int MyMaxTries;
	
};

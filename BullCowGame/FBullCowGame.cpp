#include "FBullCowGame.h"

FBullCowGame::FBullCowGame()
{
	MyCurrentTry = 1;
	MyMaxTries = 5;
}

void FBullCowGame::Reset()
{

}

//Getter
int FBullCowGame::GetMaxTries() 
{

	return MyMaxTries;
}

int FBullCowGame::GetCurrentTry() 
{
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() 
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::pmr::string)
{
	return false;
}

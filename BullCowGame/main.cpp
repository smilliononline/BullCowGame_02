#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro(); // Prototype to allow function to work
void PlayGame();
bool AskToPlayAgain();
FBullCowGame BCGame; //instantiate a new game

// Entry Point for our Application
int main(int argc, char* argv[])
{
	do
	{
		PrintIntro();
		PlayGame();
		
	} while (AskToPlayAgain());

	std::cout << std::endl;
	return 0;
}

void PrintIntro()
{
	// introduced the game
	constexpr auto WORD_LENGTH = 9;

	std::cout << "Welcome to Bulls and Cows" << std::endl;
	std::cout << "Can you guys the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?" << std::endl;
	std::cout << std::endl;
}


std::pmr::string GetGuess()
{
	// get a guess from the player
	int CurrentTry = BCGame.GetCurrentTry();

	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	std::pmr::string Guess{};
	getline(std::cin, Guess);
	return Guess;
			
}

void PlayGame()
{
	const auto MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	// loop for number of turns
	for (int i = 0; i < MaxTries; ++i)
	{
		auto Guess = GetGuess();
		
		//repeat the guess back		
		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n)" << std::endl;
	std::pmr::string response{};
	getline(std::cin, response);

	return (response[0] == 'y' || response[0] == 'Y');

}
	

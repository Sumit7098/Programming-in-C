/*
CH-230-A
a9_p5.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
	// Read player's name
	string userName;
	cout << "Enter your name: ";
	getline(cin, userName);

	// Set random number between 1 - 100
	int randomNumber, guess, count = 1;
	srand(static_cast<unsigned int>(time(0))); /*Init random number generator*/
	randomNumber = (rand() % 100) + 1;

	// Read player's guess and compare with the actual number 
	cout << "Enter a number between 1 - 100: ";
	cin >> guess;
	
	// Keep reading guesses until player gets the correct answer
	// Give feedback on whether the answer is higher or lower than the guess
	while (1)
	{
		if (guess > randomNumber)
		{
			cout << "Wrong guess... The answer is lower\nTry again: ";
			cin >> guess;
			count++;
		}
		else if(guess < randomNumber)
		{
			cout << "Wrong guess... The answer is higher\nTry again: ";
			cin >> guess;
			count++;
		}
		else if (randomNumber == guess)
		{
			cout << "You guessed the correct number! Good Job!!" << endl;
			cout << "It took you " << count << " tries." << endl;
			break;
		}
	}


	return 0;
}

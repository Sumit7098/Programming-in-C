/*
CH-230-A
a9_p9.c
Qais Qamhia
q.qamhia@jacobs-university.de
*/


#include <iostream>
#include <ctime>
using namespace std;

// Checks if character is a vowel
// Return 1 if it is and 0 if it isn't
int is_vowel(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        if (c == 'a' || c == 'o' || c == 'i' || c == 'e' || c == 'u')
            return 1;

        else if (c == 'A' || c == 'O' || c == 'I' || c == 'E' || c == 'U')
            return 1;

        else
            return 0;
    }
    else
        return 0;
}

// Replaces all vowels in a word with '_'
void replace_vow(string &word)
{
    for (int i = 0; i < size(word); i++)
    {
        if (is_vowel(word[i]))
        {
            word[i] = '_';
        }
    }
}

// Initialize the game
string init_guess_game(string &word, string wordPool[])
{
    // Choose a random word and call the function for it
    int randomNumber = rand() % 17;
    string chosenWord = wordPool[randomNumber];
    replace_vow(wordPool[randomNumber]);
    cout << "Try completing the following word: " << wordPool[randomNumber] << endl;
    cout << "Enter your guess: ";

    return chosenWord;
}

int main()
{
	// Create an array of strings
	string strArr[17] = { "computer", "television", "keyboard", "laptop", 
        "mouse", "table", "phone", "actor", "professor", "housing",
        "sandwich", "chair", "tshirt", "sweater", "country", "city", "capital" };
	
	// Init random number generator
	srand(static_cast<unsigned int> (time(0)));

    // Initializes the guessing game
    string chosenWord;
    init_guess_game(chosenWord, strArr);

    // Get answers from user and keep count of # of attempts
    // Exits after user enters "quit" as an attempt
    int countAttempts = 1;
    string attempt;
    cin >> attempt;
    while (attempt != "quit")
    {
        if (attempt == chosenWord)
        {
            cout << "Good job!! You guessed the right word!" << endl;
            cout << "It took you '" << countAttempts << "' attempts" << endl;
            cout << "Do you want to play again? Yes/No: ";
            cin >> attempt;
            if (attempt == "Yes")
            {
                
                init_guess_game(chosenWord, strArr);
                // Get answers from user and keep count of # of attempts
                int countAttempts = 1;
                cin >> attempt;
            }
            else if (attempt == "No" || attempt == "quit")
            {
                exit(0);
            }
        }
        else if (attempt != chosenWord)
        {
            cout << "Wrong guess... Try again: ";
            cin >> attempt;
            countAttempts++;
        }
        
    }
    
}


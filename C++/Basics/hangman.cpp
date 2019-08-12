/****************************************************
 * Jeff Lund
 * Hangman Program
 * 2-player hangman game
 * **************************************************/


#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

const int SIZE = 100;

void replace_string(char original[], char replaced[])
{
    int length = strlen(original);
    for(int i = 0; i < length; ++i)
    {
        if(!isspace(original[i]))
        {
            replaced[i] = '_';
        }
        else
        {
            replaced[i] = original[i];
        }
    }
    replaced[length] = '\0';
    return;
}

// Choice is the character the user has guessed.
// original contains the actual phrase entered
// guess is the string to swap out blanks for the correct letter
// returns an int on whether the user got at least one letter filled in
int check_guess(char original[], char guess[], char choice)
{
    return 0;
}

// allow the user to guess a new letter.
// guessed contains the characters the user has already used
// only allow the user to guess valid letters [a-z][A-Z]
// that they have not yet guessed
// Add a valid guess to the guessed array 
char make_guess(char guessed[], int length)
{
    return 0;
}

// go through the guess array to see if the user has filled in the array
bool validate_win(char guess[])
{
    return false;
}

// driver for playing the actual game
// user has 6 lives, if the user runs out of lives then returns false
// if the user fills in the guess string returns true
//
bool play_game(char original[], char guess[])
{
    // get a valid guess
    // check array to fill in slots
    // update lives remaining
    // check to see if the guess array has been filled in completely
    // return if the array is filled or lives == 0
    return false;
}

int main(void)
{
    char original[SIZE]; // holds the original phrase
    char guess[SIZE]; // holds the phrase to be filled in with guesses
    char cont = 'y'; // continue playing?
    bool win; // did the player win?

    do
    {
        cout << "Enter a phrase: ";
        cin.get(original, 100, '\n');
    
        replace_string(original, guess);
        // blank out the screen
        for(int i = 0; i < 20; ++i)
        {
            cout << endl;
        }

        // let player 2 guess the word
        cout << "Guess the phrase!" << endl;
        win = play_game(original, guess);
        if(win)
        {
            cout << "You got it! Player 2 wins!" << endl;
        }
        else
        {
            cout << "You got hung. Player 1 wins." << endl;
        }
        cout << "Player another game? (y/n): ";
        cont = cin.get();
    } while(cont != 'n');
    cout << "Thanks for playing hangman" << endl;
}

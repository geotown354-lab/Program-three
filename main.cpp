/*
    Animal Hangman
    Author Geordan Townsend.
    Date 11/2
*/
#include <iostream>
#include <vector>
#include "Animal.h"
#include "Word.h"
#include "GuessedLetters.h"
#include "GameState.h"
using namespace std;

int main() {
    cout << "Choose animal (cow/insect): ";
    string type;
    cin >> type;

    // Setup animal body parts
    vector<string> cowParts = {"HEAD", "BODY", "LEFT_FRONT_LEG", "LEFT_BACK_LEG", "RIGHT_FRONT_LEG", "RIGHT_BACK_LEG"};
    vector<string> insectParts = {"HEAD", "BODY", "LEFT_FRONT_LEG", "LEFT_MIDDLE_LEG", "LEFT_BACK_LEG",
                                  "RIGHT_FRONT_LEG", "RIGHT_MIDDLE_LEG", "RIGHT_BACK_LEG"};

    Animal cow(4, "cow", cowParts);
    Animal insect(6, "insect", insectParts);

    Animal current = (type == "insect") ? insect : cow;

    // Initialize classes
    GameState game(type);
    GuessedLetters guessed;
    Word word("Rhino"); // Secret word (change if you want)

    cout << "\nLet's play Hang-Animal! Guess the animal word!\n";

    // Game loop
    while (!game.gameOver() && !word.solved()) {
        cout << "\nWord: " << word.getWord() << endl;
        cout << "Guessed: " << guessed.getLetters() << endl;
        cout << "Body parts: " << game.getState() << endl;

        cout << "Enter a letter: ";
        char guess;
        cin >> guess;

        guessed.addLetter(guess);

        if (word.findLetter(guess)) {
            word.addLetter(guess);
            cout << "Correct!\n";
        } else {
            game.addState();
            cout << "Incorrect!\n";
        }
    }

    if (word.solved()) {
        cout << "\nYou guessed the word! The " << current.getName() << " is safe!\n";
    } else {
        cout << "\nGame Over! The " << current.getName() << " has been hung!\n";
    }

    return 0;
}

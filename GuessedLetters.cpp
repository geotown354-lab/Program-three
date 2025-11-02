#include "GuessedLetters.h"

GuessedLetters::GuessedLetters()
{
    //ctor
}

string GuessedLetters::getLetters()
{
    string letters;
    for(char c: m_guessed)
    {
        letters += c;
    }
    return letters;
}

void GuessedLetters::addLetter(char c)
{
    for(char g: m_guessed)
    {
        if( g==c) return;
    }
    m_guessed.push_back(c);
}

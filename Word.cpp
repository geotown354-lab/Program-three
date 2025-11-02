#include "Word.h"
#include <cctype>  // for tolower()

Word::Word(string word) {
    m_word = word;
    for (char c : word)
        m_currentWord.push_back('_');
}

string Word::getWord()  {
    string result;
    for (char c : m_currentWord)
        result += c;
    return result;
}

void Word::addLetter(char guess) {
    auto it = m_currentWord.begin();
    for (char c : m_word) {
        if (tolower(c) == tolower(guess))
            *it = c;
        ++it;
    }
}

bool Word::findLetter(char guess)
{
    for (char c : m_word)
        {
            if (tolower(c) == tolower(guess))
            {
            return true;
            }
    }
    return false;
}

bool Word::solved()
{
    for (char c : m_currentWord)
        {
            if (c == '_'){
                return false;
            }
        }
    return true;
}

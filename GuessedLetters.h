#ifndef GUESSEDLETTERS_H
#define GUESSEDLETTERS_H
#include <list>
#include <string>
using namespace std;


class GuessedLetters
{
    public:
        GuessedLetters();
        string getLetters();
        void addLetter(char);

    protected:

    private:
        list<char> m_guessed;
};

#endif // GUESSEDLETTERS_H

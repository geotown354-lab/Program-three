#ifndef WORD_H
#define WORD_H
#include <list>
#include <string>
using namespace std;

class Word
{
    public:
        Word(string word);

        string getWord();
        void addLetter(char);
        bool findLetter(char);  //true if letter is in m_word
        bool solved();      // True if no underscores remain

    protected:

    private:
        list<char> m_currentWord;
        string m_word;
};

#endif // WORD_H

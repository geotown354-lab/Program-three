#ifndef GAMESTATE_H
#define GAMESTATE_H
#include <string>
#include <vector>
#include <list>
using namespace std;


class GameState
{
    public:
        GameState();
        GameState(string animalType);
        string getState();
        void addState();
        bool gameOver();

    protected:

    private:
        list<string> m_state;
        vector<string> m_allStates;
        int m_nextState;
};

#endif // GAMESTATE_H

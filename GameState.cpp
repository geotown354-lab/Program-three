#include "GameState.h"
#include <sstream>

using namespace std;

GameState::GameState()
{
    //ctor
    m_allStates = {"HEAD", "BODY", "LEFT_FRONT_LEG", "LEFT_BACK_LEG","RIGHT_FRONT_LEG", "RIGHT_BACK_LEG"}; // for cow

    m_nextState = 0; // Start with no parts shown
}

// Constructor that sets up animal-specific states
GameState::GameState(string animalType)
{
    if (animalType == "insect")
        {
        m_allStates = {"HEAD", "BODY", "LEFT_FRONT_LEG", "LEFT_MIDDLE_LEG",
                       "LEFT_BACK_LEG", "RIGHT_FRONT_LEG",
                       "RIGHT_MIDDLE_LEG", "RIGHT_BACK_LEG"};
    } else
    { // Default to cow
        m_allStates = {"HEAD", "BODY", "LEFT_FRONT_LEG", "LEFT_BACK_LEG",
                       "RIGHT_FRONT_LEG", "RIGHT_BACK_LEG"};
    }
    m_nextState = 0;
}

// return current game state
string GameState::getState() {
    if (m_state.empty())
        return "No body parts yet.";

    stringstream ss;
    ss << "Current parts: ";
    for (const string& part : m_state) {
        ss << part << " ";
    }
    return ss.str();
}

void GameState::addState() {
    if (m_nextState < (int)m_allStates.size()) {
        m_state.push_back(m_allStates[m_nextState]);
        m_nextState++;
    }
}

bool GameState::gameOver() {
    return m_nextState >= (int)m_allStates.size();
}

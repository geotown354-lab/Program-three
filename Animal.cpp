#include "Animal.h"

Animal::Animal(int numberLegs, string name, vector <string> bodyParts)
{
    //ctor
    m_numberLegs = numberLegs;
    m_name = name;
    m_bodyParts = bodyParts;
}

int Animal:: getNumberLegs()
{
    return m_numberLegs;
}

string Animal:: getName()
{
    return m_name;
}

vector<string> Animal::getBodyParts()
{
    return m_bodyParts;
}

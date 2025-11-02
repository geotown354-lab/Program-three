#ifndef ANIMAL_H
#define ANIMAL_H
#include <vector>
#include <string>
using namespace std;

class Animal
{
    public:

        Animal(int numberLegs, string name, vector<string> bodyParts);
        int getNumberLegs();
        string getName();
        vector <string> getBodyParts();

    protected:

    private:
        int m_numberLegs;
        string m_name;
        vector <string> m_bodyParts;
};

#endif // ANIMAL_H

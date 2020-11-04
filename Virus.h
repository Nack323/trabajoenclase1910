#include <iostream>

#ifndef Virus_h
#define Virus_h

class Virus{
    private:
        std::string name;
        float probabilityOfInfection;
        float probabilityAsymptomatic;
        float probabilityDeath;
        float probabilityHealed;
        float probabilityInfected;
    public:
        Virus(std::string, float, float, float, float, float);
        Virus();
    float getProbabilityAsymptomatic();
};

#endif

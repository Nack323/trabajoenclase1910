#ifndef Virus_h
#define Virus_h

class Virus{
    public:
        std::string name;
        float probabilityOfInfection;
        float probabilityAsymptomatic;
        float probabilityDeath;
        float probabilityHealed;
        float probabilityInfected;
        Virus(std::string, float, float, float, float, float);
        Virus();
};

#endif

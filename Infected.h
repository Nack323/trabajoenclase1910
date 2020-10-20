#ifndef Infected_h
#define Infected_h

#include "Person.h"

class Infected : public Person{
    private:
        int numEpochsHealthy;
        int numEpochsInfected;
    public:
        Infected(int, int);
        void next_move() override;
        void updateEpoch() override;
}

#endif

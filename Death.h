#ifndef Death_h
#define Death_h
#include "Person.h"
class Death:public Person{
    private:
        int numEpochsHealthy;
        int numEpochsInfected;
        int epochOfDeath;
    public:
        Death(int, int, int);
        void next_move() override;
        void updateEpoch() override;
    
};

#endif

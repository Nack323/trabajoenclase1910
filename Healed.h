#ifndef Healed_h
#define Healed_h
#include "Person.h"
class Healed:public Person{
    private:
        int numEpochsHealthy;
        int numEpochsInfected;
        int numEpochsHealed;
    public:
        Healed(int,int,int);
        void next_move() override;
        void updateEpoch() override;
};
#endif

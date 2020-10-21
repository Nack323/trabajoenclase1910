#ifndef Healthy_h
#define Healthy_h

#include "Person.h"
class Healthy:public Person{
    private:
        int numEpochsHealthy;
    public:
        Healthy(int);
        void setNumEpochs(int)
        void next_move() override;
        void updateEpoch() override;
};
#endif

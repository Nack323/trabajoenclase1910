#ifndef Healthy_h
#define Healthy_h

#include "Person.h"
class Healthy{
    private:
        int numEpochsHealthy;
    public:
        Healthy(int);
        setNumEpochs(int)
        void next_move() override;
        void updateEpoch() override;
};
#endif

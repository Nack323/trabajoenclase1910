#ifndef Asymptomatic_h
#define Asymptomatic_h

#include "Infected.h"

class Asymptomatic : public Infected {
    public:
        void next_move() override;
        Asymptomatic(int, int, int);
};

#endif

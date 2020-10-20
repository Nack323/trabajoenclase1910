#ifndef Symptomatic_h
#define Symptomatic_h
#include "Infected.h"

class Symptomatic : public Infected{  
    public:
        void next_move() override;
};

#endif

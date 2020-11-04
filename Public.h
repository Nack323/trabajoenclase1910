#ifndef Public_h
#define Public_h

#include "Hospital.h"
class Public : public Hospital{
    public:
    Public(int, int, float);
        bool acceptPatient() override;
};

#endif

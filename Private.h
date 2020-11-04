#ifndef Private_h
#define Private_h

#include "Hospital.h"

class Private : public Hospital{
    public:
    Private(int, int, float);
        bool acceptPatient() override;
};

#endif

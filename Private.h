#ifndef Private_h
#define Private_h

#include "Hospital.h"

class Private : public Hospital{
    public:
        bool acceptPatient() override;
};

#endif

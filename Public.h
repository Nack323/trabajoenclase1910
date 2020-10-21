#ifndef Public_h
#define Public_h

#include "Hospital.h"
class Public : public Hospital{
    public:
        bool acceptPatient() override;
};

#endif

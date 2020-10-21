#ifndef Hospital_h
#define Hospital_h
#include "WorldObject.h"
class Hospital : public WorldObject{
    private:
        int id;
        int capacity;
        float increaseProbabilityHealed;
    public:
        Hospital(int, int, float);
        virtual bool acceptPatient();
};

#endif


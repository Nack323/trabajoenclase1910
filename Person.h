#ifndef Person_h
#define Person_h

#include "WorldObject.h"
class Person: public WorldObject{
    private:
        int id;
    public:
        Person(int);
        virtual void next_move();
        virtual void updateEpoch();
};
#endif

#ifndef World_h
#define World_h
#include "WorldObject.h"
#include "Person.h"
#include "Virus.h"
class World{
    private:
        WorldObject *world;
        Person *population;
        Virus virus;
    public:
        World(WorldObject*, Person*, Virus);
        World();
        void newEpoch();
        int getInfected();
        int getDeath();
        int getHealthy();
        int getHealed();
        void printWorld();
};

#endif


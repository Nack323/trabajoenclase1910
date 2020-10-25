#ifndef World_h
#define World_h
#include "WorldObject.h"
#include "Person.h"
#include "Virus.h"
class World{
private:
    WorldObject ***world;
    int worldSize;
    Person *death{nullptr};
    int deathInWorld{0};
    Virus virus;
    int privateHospitalsCapacity{4};
    float increaseProbabilityHealedPrivate{0.15};
    int publicHospitalsCapacity{8};
    float increaseProbabilityHealedPublic{0.1};
    
public:
    World(Virus, int);
    World();
    void initWorld(int, int, int, int);
    void newEpoch(int);
    int getInfected();
    int getDeath();
    int getHealthy();
    int getHealed();
    void printWorld();
};

#endif


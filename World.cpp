#include "World.h"
#include "WorldObject.h"
#include <iostream>

World::World(Virus virus, int worldSize)
{
    this->virus = virus;
    this->worldSize = worldSize;
    this->world = new WorldObject**[worldSize];
    for(int i=0; i<worldSize; i++){
        this->world[i] = new WorldObject*[worldSize];
    }
}

void World::initWorld(int numPrivateHospitals, int numPublicHospitals, int numHealthyPeople, int numInfectedPeople){
    
}

void World::newEpoch(int epoch)
{
  //falta
}

int World:: getInfected()
{
  return 0; //no se que variable es jeje
}

int World::getDeath()
{
  return 0; //no se que variable es jeje
}

int World::getHealthy()
{
  return 0; //no se que variable es jeje
}

int World::getHealed()
{
  return 0; //no se que variable es jeje
}

void World::printWorld()
{
  //falta
}

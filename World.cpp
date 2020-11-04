#include "World.h"
#include "WorldObject.h"
#include "Person.h"
#include "Healthy.h"
#include "Symptomatic.h"
#include "Asymptomatic.h"
#include "Infected.h"
#include "Hospital.h"
#include "Private.h"
#include "Public.h"
#include "Healed.h"

#include <iostream>

World::World(Virus virus, int worldSize)
{
    this->virus = virus;
    this->worldSize = worldSize;
    this->world = new WorldObject**[worldSize];
    for(int i=0; i<worldSize; i++){
        this->world[i] = new WorldObject*[worldSize];
    }
    for(int i=0; i<this->worldSize; i++){
        for(int j=0; j<this->worldSize; j++){
            this->world[i][j] = nullptr;
        }
    }
}

void World::getRandomXY(int &X, int &Y){
    while(true){//si el mundo esta lleno, esto nunca termina.
        X = rand()%this->worldSize;
        Y = rand()%this->worldSize;
        if(this->world[X][Y]==nullptr){
            break;//return;
        }
    }
}

void World::initWorld(int numPrivateHospitals, int numPublicHospitals, int numHealthyPeople, int numInfectedPeople){
    int id = 0;
    int X, Y;
    
    Healthy *healthyPerson;
    for(int i=0; i<numHealthyPeople; i++, id++){
        healthyPerson = new Healthy(id);
        this->getRandomXY(X, Y);
        healthyPerson->setX(X);
        healthyPerson->setY(Y);
        this->world[X][Y] = healthyPerson;
    }
    
    Infected *infectedPerson;
    for(int i=0; i<numInfectedPeople; i++, id++){
        if((float)(rand()%1000)/1000 <= this->virus.getProbabilityAsymptomatic()){
            infectedPerson = new Asymptomatic(id, 0, 0);
        }else{
            infectedPerson = new Symptomatic(id, 0, 0);
        }
        this->getRandomXY(X, Y);
        infectedPerson->setX(X);
        infectedPerson->setY(Y);
        this->world[X][Y] = infectedPerson;
    }
    
    Hospital *hospital;
    for(int i=0; i<numPrivateHospitals; i++, id++){
        hospital = new Private(id, this->privateHospitalsCapacity, this->increaseProbabilityHealedPrivate);
        this->getRandomXY(X, Y);
        hospital->setX(X);
        hospital->setY(Y);
        this->world[X][Y] = hospital;
    }
    for(int i=0; i<numPrivateHospitals; i++, id++){
        hospital = new Public(id, this->publicHospitalsCapacity, this->increaseProbabilityHealedPublic);
        this->getRandomXY(X, Y);
        hospital->setX(X);
        hospital->setY(Y);
        this->world[X][Y] = hospital;
    }
}

void World::newEpoch(int epoch)
{
  //falta
}

int World:: getInfected()
{
    Infected *infectedPerson;
    int infected = 0;
    for(int i=0; i<this->worldSize; i++){
        for(int j=0; j<this->worldSize; j++){
            infectedPerson = dynamic_cast<Infected *>(this->world[i][j]);
            if(infectedPerson){
                infected++;
            }
        }
    }
    return infected;
}

int World::getDeath()
{
  return this->deathInWorld;
}

int World::getHealthy()
{
    Healthy *healthyPerson;
    int healthy = 0;
    for(int i=0; i<this->worldSize; i++){
        for(int j=0; j<this->worldSize; j++){
            healthyPerson = dynamic_cast<Healthy *>(this->world[i][j]);
            if(healthyPerson){
                healthy++;
            }
        }
    }
    return healthy;
}

int World::getHealed()
{
    Healed *healedPerson;
    int healed = 0;
    for(int i=0; i<this->worldSize; i++){
        for(int j=0; j<this->worldSize; j++){
            healedPerson = dynamic_cast<Healed *>(this->world[i][j]);
            if(healedPerson){
                healed++;
            }
        }
    }
    return healed;
}

void World::printWorld()
{
  //falta
}

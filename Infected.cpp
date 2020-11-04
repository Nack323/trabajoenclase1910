#include "Infected.h" 
#include <iostream>

Infected::Infected(int _id, int _numEpochsHealthy, int _numEpochsInfected):Person(_id), numEpochsHealthy(_numEpochsHealthy), numEpochsInfected(_numEpochsInfected)
{

}

void Infected::next_move()
{
  //override
}

void Infected::updateEpoch()
{
  //override
}

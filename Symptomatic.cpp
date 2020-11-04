#include "Symptomatic.h"
#include <iostream> 

void Symptomatic::next_move()
{
  //override
}

Symptomatic::Symptomatic(int id, int numEpochsHealthy, int numEpochsInfected):
Infected(id, numEpochsHealthy, numEpochsInfected)
{ }

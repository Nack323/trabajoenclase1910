#include "Asymptomatic.h"
#include <iostream> 

void Asymptomatic::next_move()
{
  //override
}

Asymptomatic::Asymptomatic(int id, int numEpochsHealthy, int numEpochsInfected):
Infected(id, numEpochsHealthy, numEpochsInfected)
{ }

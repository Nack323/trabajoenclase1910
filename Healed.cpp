#include "Healed.h"
#include <iostream>

Healed::Healed(int numEpochsHealthy, int numEpochsInfected, int numEpochsHealed):numEpochsHealed(numEpochsHealed),numEpochsInfected(numEpochsInfected),numEpochsHealthy(numEpochsHealthy)
{
 
}

void Healed::next_move()
{
  //override
}

void Healed::updateEpoch()
{
  //override
}

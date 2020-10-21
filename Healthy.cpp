#include "Healthy.h"
#include <iostream>

Healthy::Healthy(int numEpochsHealthy):numEpochsHealthy(numEpochsHealthy)
{

}

void Healthy::setNumEpochs(int numEpochsHealthy)
{
  this->numEpochsHealthy=numEpochsHealthy;
}

void Healthy::next_move()
{
  //override
}

void Healthy::updateEpoch()
{
  //override
}  

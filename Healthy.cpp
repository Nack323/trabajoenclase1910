#include "Healthy.h"
#include <iostream>

Healthy::Healthy(int id):Person(id)
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

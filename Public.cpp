#include "Public.h"
#include <iostream> 

bool Public::acceptPatient()
{
  //override
    return false;
}


Public::Public(int id, int capacity, float increaseProbabilityHealed):Hospital(id, capacity, increaseProbabilityHealed){
    
}

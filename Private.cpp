#include "Private.h"
#include <iostream> 

bool Private::acceptPatient() 
{
  //override
    return false;
}

Private::Private(int id, int capacity, float increaseProbabilityHealed):Hospital(id, capacity, increaseProbabilityHealed){
    
}

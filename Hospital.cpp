#include "Hospital.h"
#include <iostream>

Hospital::Hospital(int id, int capacity, float increaseProbabilityHealed):id(id),capacity(capacity),increaseProbabilityHealed(increaseProbabilityHealed)
{

}

bool Hospital::acceptPatient()
{
  /*if(numberOfpatiensInHospital+1<=capacity){
      return True;
    }else {
      return False;
    } */
    return false;
}

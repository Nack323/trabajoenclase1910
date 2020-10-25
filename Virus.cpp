#include "Virus.h"
#include <iostream> 

Virus::Virus(std::string name, float probabilityOfInfection, float probabilityAsymptomatic, float probabilityDeath, float probabilityHealed, float probabilityInfected):name(name),probabilityOfInfection(probabilityOfInfection),probabilityAsymptomatic(probabilityAsymptomatic),probabilityDeath(probabilityDeath),probabilityHealed(probabilityHealed),probabilityInfected(probabilityInfected)
{

}

Virus::Virus(){}

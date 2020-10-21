#include <iostream> 
#include "Virus.h"
#include "World.h" 

using namespace std;

int main()
{
    Virus covid19("Covid19",0.8f, 0.8f, 0.02f, 0.5f, 0.48f);
    World earth(covid19, 1000);
    
    //Initial Conditions
    int numPrivateHospitals=10;
    int numPublicHospitals=10;
    int numHealthyPeople=100;
    int numInfectedPeople=1;
    
    earth.initWorld(numPrivateHospitals, numPublicHospitals, numHealthyPeople, numInfectedPeople);
    
    //Simulacion 
    int numEpochs=10000; 
    for(int i=0; i<numEpochs; i++)
    {
        earth.newEpoch(i);
        cout<<"Infected: "<<earth.getInfected()<<endl;
        cout<<"Death: "<<earth.getDeath()<<endl;
        cout<<"Healthy: "<<earth.getHealthy()<<endl;
        cout<<"Healed: "<<earth.getHealed()<<endl;
    }
    
    return 0;
}

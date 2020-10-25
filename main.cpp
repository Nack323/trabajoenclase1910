//
//  main.cpp
//  998_2DWorld
//
//  Created by Daniel Riofrio on 10/21/20.
//

#include <iostream>
#include "Virus.h"
#include "World.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    Virus covid19("Covid19", 0.8f, 0.8f, 0.02f, 0.5f, 0.48f);
    World earth(covid19, 1000);
    
    //Init conditions
    int numPrivateHospitals = 10;
    int numPublicHospitals = 10;
    int numHealthyPeople = 1000;
    int numInfectedPeople = 1;
    
    earth.initWorld(numPrivateHospitals, numPublicHospitals, numHealthyPeople, numInfectedPeople);
    
    //Simulacion
    int numEpochs = 10000;
    for(int i=0; i<numEpochs; i++){
        earth.newEpoch(i);
        cout << "Infected: " << earth.getInfected() << endl;
        cout << "Death: " << earth.getDeath() << endl;
        cout << "Healthy: " << earth.getHealthy() << endl;
        cout << "Healed: " << earth.getHealed() << endl;
    }
    
    return 0;
}

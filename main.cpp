//
//  main.cpp
//  998_2DWorld
//
//  Created by Daniel Riofrio on 10/21/20.
//

#include <iostream>
#include "Virus.h"
#include "World.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    srand((int)time(NULL));
    Virus covid19("Covid19", 0.8f, 0.8f, 0.02f, 0.5f, 0.48f);
    World earth(covid19, 2000);
    
    //Init conditions
    int numPrivateHospitals = 25;
    int numPublicHospitals = 25;
    int numHealthyPeople = 10000;
    int numInfectedPeople = 10;
    
    earth.initWorld(numPrivateHospitals, numPublicHospitals, numHealthyPeople, numInfectedPeople);
    
    //Simulacion
    int numEpochs = 1;
    for(int i=0; i<numEpochs; i++){
        earth.newEpoch(i);
        cout << "Infected: " << earth.getInfected() << endl;
        cout << "Death: " << earth.getDeath() << endl;
        cout << "Healthy: " << earth.getHealthy() << endl;
        cout << "Healed: " << earth.getHealed() << endl;
    }
    
    return 0;
}

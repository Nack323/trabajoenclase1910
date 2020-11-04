#include "WorldObject.h"

WorldObject::WorldObject(int posX, int posY){
    this->posX = posX;
    this->posY = posY;
}

WorldObject::WorldObject(){}

void WorldObject::setX(int X){
    this->posX = X;
}

void WorldObject::setY(int Y){
    this->posY = Y;
}

int WorldObject::getX(){
    return this->posX;
}

int WorldObject::getY(){
    return this->posY;
}

#ifndef WorldObject_h
#define WorldObject_h

class WorldObject{
    private:
        int posX{0};
        int posY{0};
    public:
        WorldObject(int, int);
        WorldObject();
    virtual ~WorldObject() = default;
    //virtual void printAlgo() = 0;//metodo virtual puro. -> no puedo instanciar objetos de este tipo.
    void setX(int);
    void setY(int);
    int getX();
    int getY();
};

#endif

#ifndef JUNGLE_JUNGLE_H
#define JUNGLE_JUNGLE_H

#include "Animal.h"

class Jungle {

private:
    int numberOfAnimals;
    int index;
    int totalFall;
    Animal** animals;

public:
    static const int length = 800;
    static const int width = 700;
    static const int xx = 100; //x of pit's center
    static const int yy = 180; //y of pit's center
    static const int r = 10; //radius of pit

    Jungle(int n);

    int getTotalFall() const;
    int getNum() const;
    int getIndex() const;

    void AddAnimal(Animal* m);
    void movement();

};


#endif //JUNGLE_JUNGLE_H

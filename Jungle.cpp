#include <iostream>
#include "Jungle.h"

Jungle::Jungle(int n) : totalFall(0) , index(0) {

    numberOfAnimals=n;
    animals = new Animal*[numberOfAnimals];

    for(int i = 0; i < numberOfAnimals ; ++i) {
        animals[i] = new Animal[1];
    }
}

int Jungle::getTotalFall() const {
    return totalFall;
}

int Jungle::getNum() const {
    return numberOfAnimals;
}

int Jungle::getIndex() const {
    return index;
}

void Jungle::AddAnimal(Animal *m) {
    m->setPosition(rand() % length, rand() % width);
    animals[index]=m;
    index++;
}

void Jungle::movement() {

    for (int i = 0; i < numberOfAnimals; ++i){
        (*(animals[i])).move(rand() % 5, rand() % 5);

        if ( animals[i]->isInPit(xx, yy, r) ){
            (*animals[i]).fall();
            this->totalFall++;
        }
    }
}









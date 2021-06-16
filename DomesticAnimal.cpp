#include <iostream>
#include "DomesticAnimal.h"

DomesticAnimal::DomesticAnimal() : Animal(){}

void DomesticAnimal::fall() {
    std::cout << " **** Domestic Animal fell ****" << std::endl;
}



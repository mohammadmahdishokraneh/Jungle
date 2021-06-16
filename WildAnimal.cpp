#include <iostream>
#include "WildAnimal.h"

WildAnimal::WildAnimal(): Animal() {}

void WildAnimal::fall() {
    std::cout << " #### Wild Animal fell ####" << std::endl;
}


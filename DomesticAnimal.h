#ifndef JUNGLE_DOMESTICANIMAL_H
#define JUNGLE_DOMESTICANIMAL_H

#include "Animal.h"

class DomesticAnimal: public Animal {

public:
    DomesticAnimal();
    virtual void fall() override final;

};


#endif //JUNGLE_DOMESTICANIMAL_H

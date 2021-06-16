#ifndef MAIN_CPP_PET_H
#define MAIN_CPP_PET_H

#include "Animal.h"

class Pet: public Animal {

public:
    Pet();
    virtual void fall() override final;

};

#endif //MAIN_CPP_PET_H

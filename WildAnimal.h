#ifndef JUNGLE_WILDANIMAL_H
#define JUNGLE_WILDANIMAL_H

#include "Animal.h"

class WildAnimal : public Animal {

public:
    WildAnimal();
    virtual void fall() override final;

};


#endif //JUNGLE_WILDANIMAL_H

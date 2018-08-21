#ifndef MALLARD_DUCK_HPP
#define MALLARD_DUCK_HPP

#include "Duck.hpp"

class MallardDuck: public Duck {

public:
    MallardDuck();
    void display() const override;
};

#endif //MALLARD_DUCK_HPP
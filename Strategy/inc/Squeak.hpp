#ifndef SQUEAK_HPP
#define SQUEAK_HPP

#include "IQuackBehavior.hpp"

class Squeak: public IQuackBehavior {
public:
    void quack() const override;
};

#endif //SQUEAK_HPP
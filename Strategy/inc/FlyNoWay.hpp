#ifndef FLY_NO_WAY_HPP
#define FLY_NO_WAY_HPP

#include "IFlyBehavior.hpp"

class FlyNoWay: public IFlyBehavior {
public:
    void fly() override;
};

#endif //FLY_NO_WAY_HPP
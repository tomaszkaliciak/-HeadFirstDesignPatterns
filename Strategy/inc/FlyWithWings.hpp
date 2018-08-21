#ifndef FLY_WITH_WINGS_HPP
#define FLY_WITH_WINGS_HPP

#include "IFlyBehavior.hpp"

class FlyWithWings: public IFlyBehavior {
public:
    void fly() const override;
};

#endif //FLY_WITH_WINGS_HPP
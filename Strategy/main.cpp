#include <iostream>
#include <memory>
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "MallardDuck.hpp"
#include "MuteQuack.hpp"

int main() {
    std::unique_ptr<Duck> d = std::make_unique<MallardDuck>();
    d->display();
    d->performFly();
    d->performQuack();

    d->setQuackBehavior(std::make_unique<MuteQuack>());
    d->setFlyBehavior(std::make_unique<FlyNoWay>());
    d->performFly();
    d->performQuack();

    return 0;
}
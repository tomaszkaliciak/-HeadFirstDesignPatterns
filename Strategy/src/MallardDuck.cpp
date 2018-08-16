#include <iostream>
#include <memory>
#include "MallardDuck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"

MallardDuck::MallardDuck() {
    setFlyBehavior(std::make_unique<FlyWithWings>());
    setQuackBehavior(std::make_unique<Quack>());
}

void MallardDuck::display() {
    std::cout << "I'm Mallard Duck!" << std::endl;
}
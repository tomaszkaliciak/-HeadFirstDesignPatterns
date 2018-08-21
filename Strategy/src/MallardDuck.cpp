#include <iostream>
#include <memory>
#include "MallardDuck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"

MallardDuck::MallardDuck() :
Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>())
{
}

void MallardDuck::display() {
    std::cout << "I'm Mallard Duck!" << std::endl;
}
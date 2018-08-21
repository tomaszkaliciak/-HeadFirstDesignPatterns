#include "Duck.hpp"

Duck::Duck(std::unique_ptr<IFlyBehavior> fb, std::unique_ptr<IQuackBehavior> qb) {
    _flyBehavior = std::move(fb);
    _quackBehavior = std::move(qb);
}

void Duck::performQuack() const {
    _quackBehavior->quack();
}

void Duck::performFly() const {
    _flyBehavior->fly();
}

void Duck::setFlyBehavior(std::unique_ptr<IFlyBehavior> fb) {
    _flyBehavior = std::move(fb);
}

void Duck::setQuackBehavior(std::unique_ptr<IQuackBehavior> qb) {
    _quackBehavior = std::move(qb);
}
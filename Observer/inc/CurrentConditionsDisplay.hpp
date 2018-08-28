#ifndef CURRENT_CONDITIONS_DISPLAY_HPP
#define CURRENT_CONDITIONS_DISPLAY_HPP

#include "inc/IObserver.hpp"

class CurrentConditionsDisplay: public IObserver {
public:
    void update(double temp, double humidity, double pressure) override;
};

#endif // CURRENT_CONDITIONS_DISPLAY_HPP
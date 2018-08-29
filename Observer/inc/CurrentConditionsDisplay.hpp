#ifndef CURRENT_CONDITIONS_DISPLAY_HPP
#define CURRENT_CONDITIONS_DISPLAY_HPP

#include "IObserver.hpp"
#include "IDisplayElement.hpp"

class ISubject;

class CurrentConditionsDisplay: public IObserver, public IDisplayElement {
public:
    CurrentConditionsDisplay(ISubject*);
    void update(double temp, double humidity, double pressure) override;
    void display() const override;
private:
    ISubject* _subject;
        double _temperature;
    double _humidity;
    double _pressure;
};

#endif // CURRENT_CONDITIONS_DISPLAY_HPP
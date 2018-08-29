#include <iostream>
#include "CurrentConditionsDisplay.hpp"
#include "WeatherData.hpp"

CurrentConditionsDisplay::CurrentConditionsDisplay(ISubject* subject):
_subject(subject)
{
    _subject->registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay() {
    if(_subject != nullptr) {
        _subject->removeObserver(this);
    }
}

void CurrentConditionsDisplay::update(double temp, double humidity, double pressure) {
    _temperature = temp;
    _humidity = humidity;
    _pressure = pressure;
    display();
}

void CurrentConditionsDisplay::display() const {
    std::cout << "Current temperature: " << _temperature << "\n";
    std::cout << "Current humidity   : " << _humidity << "\n";
    std::cout << "Current pressure   : " << _pressure << "\n\n";
}

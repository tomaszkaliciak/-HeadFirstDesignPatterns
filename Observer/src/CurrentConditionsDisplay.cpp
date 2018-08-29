#include <iostream>
#include "CurrentConditionsDisplay.hpp"
#include "WeatherData.hpp"

CurrentConditionsDisplay::CurrentConditionsDisplay(ISubject* subject):
_subject(subject)
{
}

void CurrentConditionsDisplay::update(double temp, double humidity, double pressure) {
    _temperature = temp;
    _humidity = humidity;
    _pressure = pressure;
    display();
}

void CurrentConditionsDisplay::display() const {
    std::cout << "Current temperature: " << _temperature << std::endl;
    std::cout << "Current humidity   : " << _humidity << std::endl;
    std::cout << "Current pressure   : " << _pressure << std::endl << std::endl;
}

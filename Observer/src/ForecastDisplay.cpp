#include <iostream>
#include "ForecastDisplay.hpp"
#include "WeatherData.hpp"

ForecastDisplay::ForecastDisplay(ISubject* subject):
_subject(subject),
_prevPressure(0),
_currPressure(0)
{
    _subject->registerObserver(this);
}

ForecastDisplay::~ForecastDisplay() {
    if(_subject != nullptr) {
        _subject->removeObserver(this);
    }
}

void ForecastDisplay::update(double temp, double humidity, double pressure) {
    _prevPressure = _currPressure;
    _currPressure = pressure;
    display();
}

void ForecastDisplay::display() const {
    if(_currPressure > _prevPressure) {
        std::cout << "The weather is improving\n\n";
    }
    else if( _currPressure == _prevPressure) {
        std::cout << "The weather is not changing\n\n";
    }
    else {
        std::cout << "It's getting colder\n\n";
    }
}

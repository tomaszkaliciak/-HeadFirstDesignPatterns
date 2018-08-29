#include "WeatherData.hpp"
#include "IObserver.hpp"
#include <algorithm>

WeatherData::WeatherData():
_temperature(0),
_humidity(0),
_pressure(0)
{
}

void WeatherData::registerObserver(IObserver* o) {
    _observers.push_back(o);
}

void WeatherData::removeObserver(IObserver* o) {
    _observers.erase(std::remove(_observers.begin(), _observers.end(), o), _observers.end());
}

void WeatherData::notifyObservers() {
    std::for_each(_observers.begin(), _observers.end(), [this](IObserver* o) {
        o->update(_temperature, _humidity, _pressure);
    });
}

void WeatherData::measurementsChanged() {
    notifyObservers();
}

void WeatherData::setMeasurements(double temp, double humidity, double pressure) {
    _temperature = temp;
    _humidity = humidity;
    _pressure = pressure;
    measurementsChanged();
}

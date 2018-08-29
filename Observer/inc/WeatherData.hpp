#ifndef WEATHER_DATA_HPP
#define WEATHER_DATA_HPP

#include <vector>
#include "ISubject.hpp"

class WeatherData: public ISubject {
public:
    WeatherData();
    double getTemperature() const { return _temperature; }
    double getHumidity() const { return _humidity; }
    double getPressure() const { return _pressure; }
    void measurementsChanged();
    void setMeasurements(double temp, double humidity, double pressure);

    void registerObserver(IObserver* o) override;
    void removeObserver(IObserver* o) override;
    void notifyObservers() override;

private:
    std::vector<IObserver*> _observers;
    double _temperature;
    double _humidity;
    double _pressure;
};

#endif // WEATHER_DATA_HPP
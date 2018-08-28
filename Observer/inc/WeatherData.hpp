#ifndef WEATHER_DATA_HPP
#define WEATHER_DATA_HPP

#include <vector>
#include "inc/ISubject.hpp"

class WeatherData: public ISubject {
public:
    double getTemperature() const;
    double getHumidity() const;
    double getPressure() const;
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
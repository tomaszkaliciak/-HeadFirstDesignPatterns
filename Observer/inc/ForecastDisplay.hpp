#ifndef FORECAST_DISPLAY_HPP
#define FORECAST_DISPLAY_HPP

#include "IObserver.hpp"
#include "IDisplayElement.hpp"

class ISubject;

class ForecastDisplay: public IObserver, public IDisplayElement {
public:
    ForecastDisplay(ISubject*);
    ~ForecastDisplay();
    void update(double temp, double humidity, double pressure) override;
    void display() const override;
private:
    ISubject* _subject;
    double _currPressure;
    double _prevPressure;
};

#endif // FORECAST_DISPLAY_HPP
#ifndef I_OBSERVER_HPP
#define I_OBSERVER_HPP

class IObserver {
public:
    virtual void update(double temp, double humidity, double pressure) = 0;
};

#endif // I_OBSERVER_HPP
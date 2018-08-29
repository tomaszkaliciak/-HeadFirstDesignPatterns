#ifndef I_SUBJECT_HPP
#define I_SUBJECT_HPP

#include "IObserver.hpp"

class ISubject {
public:
    virtual ~ISubject() = default;
    virtual void registerObserver(IObserver* o) = 0;
    virtual void removeObserver(IObserver* o) = 0;
    virtual void notifyObservers() = 0;
};

#endif // I_SUBJECT_HPP
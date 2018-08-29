#ifndef I_DISPLAY_ELEMENT_HPP
#define I_DISPLAY_ELEMENT_HPP

class IDisplayElement {
public:
    virtual ~IDisplayElement() = default;
    virtual void display() const = 0;
};

#endif // I_DISPLAY_ELEMENT_HPP
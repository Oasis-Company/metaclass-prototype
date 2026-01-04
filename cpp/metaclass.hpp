// metaclass.hpp
#ifndef METACLASS_HPP
#define METACLASS_HPP

class Metaclass {
public:
    virtual void displayAttributes() const = 0;
    virtual ~Metaclass() = default;
};

#endif


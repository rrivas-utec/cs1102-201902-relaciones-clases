#ifndef PROGRESSION_H
#define PROGRESSION_H

#include "common.h"

class progression_t {
protected:
    integral_t first;
    integral_t current;
public:
    progression_t (integral_t first);
    integral_t first_value();
    virtual integral_t next_value() = 0;
    void print_progression(size_t n);
};

class arithmetic_progression_t: public progression_t {
    integral_t increment;
public:
    arithmetic_progression_t (integral_t increment);
    integral_t next_value();
};

class geometric_progression_t: public progression_t {
    integral_t base;
public:
    geometric_progression_t (integral_t base);
    integral_t next_value();
};

class fibonacci_progression_t: public progression_t {
    integral_t previous;
public:
    fibonacci_progression_t (integral_t previous);
    integral_t next_value();
};


#endif //PROGRESSION_PROGRESSION_H

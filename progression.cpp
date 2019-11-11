//
// Created by rudri on 11/11/2019.
//

#include "progression.h"
#include <iostream>

arithmetic_progression_t::arithmetic_progression_t(integral_t increment) :
    progression_t(1), increment{increment} {
}

integral_t arithmetic_progression_t::next_value() {
    current = current + increment;
    return current;
}

geometric_progression_t::geometric_progression_t(integral_t base) :
    progression_t(base), base{base} {

}

integral_t geometric_progression_t::next_value() {
    current = current * base;
    return current;
}

fibonacci_progression_t::fibonacci_progression_t(integral_t previous) :
    progression_t(previous + 1), previous{previous}  {

}

integral_t fibonacci_progression_t::next_value() {
    auto next = current + previous;
    previous = current;
    current = next;
    return current;
}

progression_t::progression_t(integral_t first): first{first}, current{first} {

}

integral_t progression_t::first_value() {
    return first;
}

void progression_t::print_progression(size_t n) {
    current = first;
    std::cout << first;
    for (size_t i = 0; i < n-1; ++i) {
        std::cout << ", " << next_value();
    }
}

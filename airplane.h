#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "common.h"

class passenger_t {
    text_t first_name;
    text_t last_name;
    text_t address;
public:
    passenger_t(text_t first, text_t last, text_t address);
    text_t get_name();
    void set_address(text_t address);
    text_t get_address();
};


class airplane_ticket_t {
    text_t flight_number;
    text_t date_time;
    passenger_t* passenger;
    text_t from;
    text_t to;
public:
    airplane_ticket_t(text_t flight, text_t dt,
                      passenger_t* passenger,
            text_t from, text_t to);
    text_t get_flight_info();
    text_t get_from();
    text_t get_to();
};

#endif //AIRPLANE_H

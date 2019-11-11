#include "airplane.h"

text_t passenger_t::get_name() {
    return first_name + " " + last_name;
}

text_t passenger_t::get_address() {
    return address;
}

passenger_t::passenger_t(text_t first, text_t last, text_t address):
    first_name{first}, last_name{last}, address{address} {
}

void passenger_t::set_address(text_t address) {
    this->address = address;
}

airplane_ticket_t::airplane_ticket_t(text_t flight, text_t dt,
                                     passenger_t *passenger,
        text_t from, text_t to): flight_number{flight}, date_time{dt},
                                 passenger{passenger},
        from{from}, to{to} {
}

text_t airplane_ticket_t::get_flight_info() {
    return "flight:"+ flight_number + " passenger:" + passenger->get_name() + " from:" + from + " to:" + to;
}

text_t airplane_ticket_t::get_from() {
    return from;
}

text_t airplane_ticket_t::get_to() {
    return to;
}

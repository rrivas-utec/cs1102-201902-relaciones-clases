#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include "common.h"

class traffic_fine_t {
	date_time_t date_time;
	money_t amount;
	text_t reason;
public:
	traffic_fine_t(date_time_t dt, money_t amount, text_t reason);
	money_t get_fine();
	text_t get_reason();
};


class automovile_t {
	text_t owner;
	text_t license_plate;
	vector<traffic_fine_t> fines;
public:
	automovile_t(text_t owner, text_t license_plate);
	money_t get_total_fine();
	void add_fine(traffic_fine_t fine);
};

#endif

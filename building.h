#ifndef BUILDING_H
#define BUILDING_H

#include "common.h"

class apartment_t {
	text_t owner;
	area_t area;
public:
	apartment_t(area_t area);
	text_t get_owner();
	area_t get_area();
	void set_owner(text_t owner);
};

class building_t {
	text_t address;
	vector<apartment_t> apartments;
public:
	building_t(text_t address, size_t number_of_floors, area_t apartment_area);
	void set_owner(size_t floor, text_t owner);
	text_t get_owner(size_t floor);
	size_t get_number_of_floor();
	size_t get_total_area();
};

#endif
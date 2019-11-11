#include "building.h"

building_t::building_t(text_t address, size_t number_of_floors, area_t apartment_area):
	address{address}
{
	for (int i = 0; i < number_of_floors; ++i)
		apartments.emplace_back(apartment_area);
}

void building_t::set_owner(size_t floor, text_t owner)
{
	apartments[floor - 1].set_owner(owner);
}

text_t building_t::get_owner(size_t floor)
{
	return apartments[floor - 1].get_owner();
}

size_t building_t::get_number_of_floor()
{
	return apartments.size();
}

size_t building_t::get_total_area()
{
	auto total = 0;
	for (auto ap : apartments)
		total += ap.get_area();
	return total;
}

apartment_t::apartment_t(area_t area): area{area}
{
}

text_t apartment_t::get_owner()
{
	return owner;
}

area_t apartment_t::get_area()
{
	return area;
}

void apartment_t::set_owner(text_t owner)
{
	this->owner = owner;
}

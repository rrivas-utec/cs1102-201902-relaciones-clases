#include "automovile.h"

traffic_fine_t::traffic_fine_t(date_time_t dt, money_t amount, text_t reason): 
	date_time {dt}, amount {amount}, reason {reason}
{
}

money_t traffic_fine_t::get_fine()
{
	return amount;
}

text_t traffic_fine_t::get_reason()
{
	return reason;
}

automovile_t::automovile_t(text_t owner, text_t license_plate): 
	owner{owner}, license_plate{license_plate}
{
}

money_t automovile_t::get_total_fine()
{
	auto total = 0;
	for (auto& f : fines)
		total += f.get_fine();
	return total;
}

void automovile_t::add_fine(traffic_fine_t fine)
{
	fines.emplace_back(fine);
}

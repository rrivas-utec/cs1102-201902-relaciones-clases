#include "bank_operation.h"

online_operation::online_operation(
	text_t currency, money_t amount, decimal_t exchange, text_t ip_address):
	bank_operation(currency, amount, exchange), ip_address{ ip_address }
{
}

void online_operation::show_operation()
{
	std::cout << "moneda:   " << currency_code << std::endl;
	std::cout << "importe:  " << amount << std::endl;
	std::cout << "exchange: " << exchange_rate << std::endl;
	std::cout << "ip:       " << ip_address << std::endl;
}

check_operation::check_operation(
	text_t currency, money_t amount, decimal_t exchange, text_t check_number):
	bank_operation(currency, amount, exchange), check_number{ check_number }
{
}

void check_operation::show_operation()
{
	std::cout << "moneda:   " << currency_code << std::endl;
	std::cout << "importe:  " << amount << std::endl;
	std::cout << "exchange: " << exchange_rate << std::endl;
	std::cout << "check #:  " << check_number << std::endl;
}

bank_operation::bank_operation(
	text_t currency, money_t amount, decimal_t exchange):
	currency_code{currency}, amount {amount}, exchange_rate{exchange}
{
}
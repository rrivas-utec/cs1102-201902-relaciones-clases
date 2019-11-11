#ifndef BANK_OPERATION_H
#define BANK_OPERATION_H

#include "common.h"

class bank_operation {
protected:
	text_t currency_code;
	money_t amount;
	decimal_t exchange_rate;
public:
	bank_operation(text_t currency, money_t amount, decimal_t exchange);
	virtual void show_operation() = 0;
};

class online_operation : public bank_operation {
	text_t ip_address;
public:
	online_operation(text_t currency, money_t amount, decimal_t exchange, text_t ip_address);
	void show_operation();
};

class check_operation : public bank_operation {
	text_t check_number;
public:
	check_operation(text_t currency, money_t amount, decimal_t exchange, text_t check_number);
	void show_operation();
};


#endif
#include "calculadora_contable.h"

calculadora_contable_t::calculadora_contable_t(percentage_t ti, percentage_t tafp) :
	tasa_impuesto(ti), tasa_afp(tafp) {
}

money_t calculadora_contable_t::calcular_remuneracion_neta(empleado_t &emp) {
    return emp.get_remuneracion() - calcular_impuesto(emp) - calcular_afp(emp);
}

money_t calculadora_contable_t::calcular_impuesto(empleado_t &emp) {
	return emp.get_remuneracion() * tasa_impuesto / 100;
}

money_t calculadora_contable_t::calcular_afp(empleado_t &emp) {
	return emp.get_remuneracion() * tasa_afp / 100;
}


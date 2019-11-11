#ifndef CALCULADORA_CONTABLE_H
#define CALCULADORA_CONTABLE_H

#include "common.h"
#include "empleado.h"

class calculadora_contable_t {
private:
	percentage_t tasa_impuesto;
	percentage_t tasa_afp;
public:
    calculadora_contable_t (percentage_t timp, percentage_t tafp);
	money_t calcular_remuneracion_neta(empleado_t &emple);
	money_t calcular_impuesto(empleado_t &imp);
	money_t calcular_afp(empleado_t &afp);
};

#endif //CALCULADORA_CONTABLE_H

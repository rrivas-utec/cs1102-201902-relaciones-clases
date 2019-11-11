#ifndef PLANILLA_H
#define PLANILLA_H

#include "empleado.h"
#include "calculadora_contable.h"

class planilla_t {
private:
    vector<empleado_t*> empleados;
    calculadora_contable_t calculadora;
public:
    planilla_t(percentage_t ti, percentage_t tafp);
    void listar_empleados();
	money_t calcular_remuneracion_total();
	money_t calcular_impuesto_total();
    void adicionar_empleado (empleado_t* emp);
    void remover_empleado (empleado_t* emp);
    empleado_t* obtener_empleado (text_t dni);
	calculadora_contable_t* obtener_calculadora();
};


#endif //PLANILLA_H

#include "planilla.h"
#include "planilla.h"

void planilla_t::listar_empleados() {
	for (auto e: empleados)
	{
		cout << e->get_dni()
			<< " " << e->get_nombre()
			<< " " << e->get_apellido()
			<< " " << e->get_remuneracion()
			<< " " << calculadora.calcular_remuneracion_neta(*e) << endl;
	}
}

money_t planilla_t::calcular_remuneracion_total() {
	auto total = 0;
	for (auto e : empleados) {
		total += calculadora.calcular_remuneracion_neta(*e);
	}
	return total;
}

money_t planilla_t::calcular_impuesto_total() {
	auto total = 0;
	for (auto e : empleados) {
		total += calculadora.calcular_impuesto(*e);
	}
	return total;
}

void planilla_t::adicionar_empleado(empleado_t *emp) {
	empleados.emplace_back(emp);
}

void planilla_t::remover_empleado(empleado_t *emp) {
	auto it = find(begin(empleados), end(empleados), emp);
	if (it != end(empleados)) {
		empleados.erase(it);
	}
}

empleado_t* planilla_t::obtener_empleado(text_t dni) {
	for (auto e : empleados) {
		if (e->get_dni() == dni)
			return e;
	}
	return nullptr;
}
calculadora_contable_t* planilla_t::obtener_calculadora()
{
	return &calculadora;
}
planilla_t::planilla_t(percentage_t ti, percentage_t tafp): calculadora(ti, tafp) {

}

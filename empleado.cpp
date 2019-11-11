#include "empleado.h"

empleado_t::empleado_t(text_t nombre, text_t apellido, money_t remuneracion, text_t dni):
	nombre{ nombre }, apellido{ apellido }, remuneracion{ remuneracion }, dni{ dni } {
}

text_t empleado_t::get_nombre() {
    return nombre;
}

text_t empleado_t::get_apellido() {
    return apellido;
}

money_t empleado_t::get_remuneracion() {
    return remuneracion;
}

text_t empleado_t::get_dni() {
    return dni;
}

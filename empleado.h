#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "common.h"

class empleado_t {
private:
    text_t nombre;
    text_t apellido;
    text_t dni;
    money_t remuneracion;
public:
    empleado_t (text_t nombre, text_t apellido, money_t remuneracion, text_t dni);
    text_t get_nombre();
    text_t get_apellido();
    money_t get_remuneracion();
    text_t get_dni();
};


#endif //PRUEBA_EMPLEADO_H

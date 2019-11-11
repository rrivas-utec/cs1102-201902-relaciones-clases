#include "planilla.h"
#include "progression.h"
#include "airplane.h"
#include "automovile.h"
#include "building.h"
#include "bank_operation.h"

void exercise1() {
	std::cout << "\nExercise #1\n";
	planilla_t pln(8, 10);
	empleado_t e1{ "Jose", "Perez", 2000, "12345678" };
	empleado_t e2{ "Rosa", "Ramos", 3500, "45678900" };
	empleado_t e3{ "Maria", "Lopez", 4000, "44433323" };
	pln.adicionar_empleado(&e1);
	pln.adicionar_empleado(&e2);
	pln.adicionar_empleado(&e3);
	cout << "Listar Empleados: \n";
	pln.listar_empleados();
	cout << "buscar empleado: \n";
	auto emp = pln.obtener_empleado("45678900");
	auto calc = pln.obtener_calculadora();
	cout << emp->get_dni()
		<< " " << emp->get_nombre()
		<< " " << emp->get_apellido()
		<< " " << emp->get_remuneracion()
		<< " " << calc->calcular_remuneracion_neta(*emp) << endl;
}

void exercise2() {
	std::cout << "\nExercise #2\n";
	arithmetic_progression_t ap(2);
    ap.print_progression(4);
    std::cout << std::endl;
    geometric_progression_t gp(2);
    gp.print_progression(8);
    std::cout << std::endl;
    fibonacci_progression_t fp(0);
    fp.print_progression(6);
    std::cout << std::endl;
}

void exercise3() {
	std::cout << "\nExercise #3\n";
	passenger_t p1{"Juan", "Perez", "address1"};
    passenger_t p2{"Jose", "Ramos", "address2"};
    passenger_t p3{"Mario", "Diaz", "address3"};
    airplane_ticket_t t1 {"f1", "11/11/2019", &p1, "Lima", "Iquito"};
    airplane_ticket_t t2 {"f2", "11/11/2019", &p2, "Lima", "Arequipa"};
    airplane_ticket_t t3 {"f3", "11/11/2019", &p3, "Cuzco", "Quito"};
    airplane_ticket_t t4 {"f1", "11/11/2019", &p1, "Lima", "Tacna"};
    std::vector<airplane_ticket_t> tickets {t1, t2, t3, t4};

    for (auto& t: tickets)
        if (t.get_from() == "Lima") {
			std::cout << t.get_flight_info() << std::endl;
        }
}

void exercise4() {
	std::cout << "\nExercise #4\n";
	automovile_t a1("Mickey Mouse", "AA123");
	a1.add_fine(traffic_fine_t{ "11/08/2019", 10, "exceso de velocidad" });
	a1.add_fine(traffic_fine_t{ "11/09/2019", 20, "cruce en luz roja" });
	a1.add_fine(traffic_fine_t{ "11/11/2019", 30, "sin cinturo" });
	std::cout << "La multa es: " << a1.get_total_fine() << std::endl;
}

void exercise5() {
	std::cout << "\nExercise #5\n";
	building_t bld("Javier Prado 101", 10, 120);
	cout << "Area total: " << bld.get_total_area() << std::endl;
}

void exercise6() {
	std::cout << "\nExercise #6\n";
	online_operation oope("USD", 100, 3.35, "127.0.0.1");
	check_operation  cope("USD", 100, 3.35, "CH1001920");
	oope.show_operation();
	std::cout << endl;
	cope.show_operation();
}

int main() {
	exercise1();
	exercise2();
	exercise3();
	exercise4();
	exercise5();
	exercise6();
	return 0;
}
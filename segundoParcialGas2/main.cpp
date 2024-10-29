#include <iostream>
#include "include/Articulo.hpp"
#include "include/Cliente.hpp"
#include "include/Empleado.hpp"
#include "include/Orden.hpp"

int main() {
    Articulo* articulo1 = new Articulo("001A", "Garrafa Pequenia", 15000.00);
    Articulo* articulo2 = new Articulo("002A", "Garrafa Mediana", 20000.00);

    Cliente* cliente = new Cliente("001C", "Juan Perez", "Belgica 7119");
    Empleado* empleado = new Empleado("001V", "Sergio", "Av Siempre Viva 123", "Vendedor");

    Orden* orden = new Orden("001", cliente, empleado);
    orden->agregarArticulo(articulo1);
    orden->agregarArticulo(articulo2);

    orden->mostrar();

    delete articulo1;
    delete articulo2;
    delete cliente;
    delete empleado;
    delete orden;

    return 0;
}

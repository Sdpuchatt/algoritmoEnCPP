#ifndef ORDEN_HPP
#define ORDEN_HPP

#include <string>
#include <list>
#include "Cliente.hpp"
#include "Empleado.hpp"
#include "Articulo.hpp"
using namespace std;
class Orden {
private:
    string codigo;
    Cliente* cliente;
    Empleado* empleado;
    list<Articulo*> articulos;

public:
    Orden(string codigo, Cliente* cliente, Empleado* empleado);
    string getCodigo();
    Cliente* getCliente();
    Empleado* getEmpleado();
    void mostrar();
    void agregarArticulo(Articulo* articulo);
    void mostrarArticulos();
};

#endif

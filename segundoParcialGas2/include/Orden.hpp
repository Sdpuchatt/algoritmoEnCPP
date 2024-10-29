#ifndef ORDEN_HPP
#define ORDEN_HPP

#include <string>
#include <list>
#include "Cliente.hpp"
#include "Empleado.hpp"
#include "Articulo.hpp"

class Orden {
private:
    std::string codigo;
    Cliente* cliente;
    Empleado* empleado;
    std::list<Articulo*> articulos;

public:
    Orden(std::string codigo, Cliente* cliente, Empleado* empleado);
    std::string getCodigo();
    Cliente* getCliente();
    Empleado* getEmpleado();
    void mostrar();
    void agregarArticulo(Articulo* articulo);
    void mostrarArticulos();
};

#endif

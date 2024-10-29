#ifndef ORDEN_HPP
#define ORDEN_HPP
#include <string>
#include "Cliente.hpp"
#include "Empleado.hpp"
#include "Articulo.hpp"
#include <list>
using namespace std;

class Orden
{
    private:
        string codigo;
        Cliente* cliente;
        Empleado* empleado;
        list<Articulo*> articulos;

    public:
        Orden(string _codigo, Cliente* _cliente, Empleado* _empleado);
        string getCodigo();
        string getCliente();
        string getEmpleado();
        string getArticulo();
        void mostrar();
        void agregarArticulo(Articulo* articulo);
        void mostrarArticulo();
};
#endif
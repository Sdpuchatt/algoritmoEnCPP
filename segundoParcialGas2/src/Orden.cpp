#include "../include/Orden.hpp"
#include <iostream>

using namespace std;
Orden::Orden(string _codigo, Cliente* _cliente, Empleado* _empleado){
    codigo = _codigo;
    cliente = _cliente;
    empleado = _empleado;
}
   

string Orden::getCodigo() { return codigo; }
Cliente* Orden::getCliente() { return cliente; }
Empleado* Orden::getEmpleado() { return empleado; }

void Orden::agregarArticulo(Articulo* articulo) 
{ 
    articulos.push_back(articulo); 
}

void Orden::mostrarArticulos() {
    for (Articulo* articulo : articulos) {
        articulo->mostrar();
    }
}

void Orden::mostrar() {
    cout << "************* Codigo: " << codigo << " ************" << endl;
    cout << "Cliente:" << endl;
    cliente->mostrar();
    cout << "**************************************" <<endl;
    cout << "Empleado:" << endl;
    empleado->mostrar();
    cout << "**************************************" <<endl;
    cout << "Articulos:" << endl;
    mostrarArticulos();
}

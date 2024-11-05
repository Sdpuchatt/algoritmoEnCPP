// include/Cliente.hpp
#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
using namespace std;

class Cliente {
    string codigo;
    string nombre;
    string direccion;

public:
    Cliente(const string& codigo, const string& nombre, const string& direccion)
        : codigo(codigo), nombre(nombre), direccion(direccion) {}

    string obtenerNombre() const { return nombre; }
    string obtenerDireccion() const { return direccion; }
};

#endif // CLIENTE_HPP

#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

class Empleado {
private:
    std::string codigo;
    std::string nombre;
    std::string direccion;
    std::string puesto;

public:
    Empleado(std::string codigo, std::string nombre, std::string direccion, std::string puesto);
    std::string getCodigo();
    std::string getNombre();
    std::string getDireccion();
    std::string getPuesto();
    void mostrar();
};

#endif

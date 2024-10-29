#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP
#include <string>
using namespace std;


class Empleado{

    private:
        string codigo;
        string nombre;
        string direccion;
        string puesto;

    public:
        Empleado(string _codigo, string _nombre, string _direccion, string _puesto);
        string getCodigo();
        string getNombre();
        string getDireccion();
        string getPuesto();
        void mostrar();
};

#endif
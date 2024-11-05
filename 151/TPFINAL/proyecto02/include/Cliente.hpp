#ifndef CLIENTE.HPP
#define CLIENTE.HPP

#include <string>
using namespace std;

class Cliente {
    private:
        string codigo;
        string nombre;
        string direccion;

    public:
        Cliente(string codigo, string nombre, string direccion);
        string obtenerNombre() const { return nombre; }
        string obtenerDireccion() const { return direccion; }


};

#endif
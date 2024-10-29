#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <string>
using namespace std;

class Cliente
{
private:
    string codigo;
    string nombre;
    string direccion;
public:
    Cliente(string _codigo, string _nombre, string _direccion);
    string getCodigo();
    string getNombre();
    string getDireccion();
    void mostrar();
};
#endif

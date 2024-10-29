#include "../include/Cliente.hpp"
#include <iostream>
using namespace std;
Cliente::Cliente(string _codigo,string _nombre,string _direccion){
    codigo = _codigo;
    nombre = _nombre;
    direccion = _direccion;
}
 

string Cliente::getCodigo() { return codigo; }
string Cliente::getNombre() { return nombre; }
string Cliente::getDireccion() { return direccion; }

void Cliente::mostrar() {
    cout << "Codigo: " << codigo << "\nNombre: " << nombre << "\nDireccion: " << direccion << endl;
}

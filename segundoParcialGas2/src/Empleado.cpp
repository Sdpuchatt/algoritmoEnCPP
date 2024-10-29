#include "../include/Empleado.hpp"
#include <iostream>
using namespace std;
Empleado::Empleado(string _codigo,string _nombre, string _direccion, string _puesto){
    codigo = _codigo;
    nombre = _nombre;
    direccion = _direccion;
    puesto = _puesto;
}
 
std::string Empleado::getCodigo() { return codigo; }
std::string Empleado::getNombre() { return nombre; }
std::string Empleado::getDireccion() { return direccion; }
std::string Empleado::getPuesto() { return puesto; }

void Empleado::mostrar() {
    
    cout << "Codigo: " << codigo << " Nombre: " << nombre << "\nDireccion: " << direccion << " Puesto: " << puesto << endl;
}

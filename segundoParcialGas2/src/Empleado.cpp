#include "../include/Empleado.hpp"
#include <iostream>
using namespace std;
Empleado::Empleado(string _codigo,string _nombre, string _direccion, string _puesto){
    codigo = _codigo;
    nombre = _nombre;
    direccion = _direccion;
    puesto = _puesto;
}
 
string Empleado::getCodigo() { return codigo; }
string Empleado::getNombre() { return nombre; }
string Empleado::getDireccion() { return direccion; }
string Empleado::getPuesto() { return puesto; }

void Empleado::mostrar() {
    
    cout << "Codigo: " << codigo << " Nombre: " << nombre << "\nDireccion: " << direccion << " Puesto: " << puesto << endl;
}

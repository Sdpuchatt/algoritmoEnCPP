#include "../include/Cliente.hpp"

Cliente::Cliente(string _codigo, string _nombre, string _direccion) {
    codigo = _codigo;
    nombre = _nombre;
    direccion = _direccion;
}

string Cliente::getCodigo() {
    return codigo;  
}
string Cliente::getNombre() {
    return nombre;
}
string Cliente::getDireccion() {
    return direccion;
}
void Cliente::mostrar() {
    cout << "Codigo: " << getCodigo() << endl;
    cout << "Nombre: " << getNombre() << endl;
    cout << "Direccion: " << getDireccion() << endl;
}
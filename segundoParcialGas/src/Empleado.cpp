#include "../include/Empleado.hpp"

Empleado::Empleado(string _codigo, string _nombre, string _direccion, string _puesto)
{
    codigo = _codigo;
    nombre = _nombre;
    direccion = _direccion;
    puesto = _puesto;
}

string Empleado::getCodigo()
{
    return codigo;
}
string Empleado::getNombre()
{
    return nombre;
}
string Empleado::getDireccion()
{
    return direccion;
}
string Empleado::getPuesto()
{
    return puesto;
}
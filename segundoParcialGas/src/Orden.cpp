#include "../include/Orden.hpp"

Orden::Orden(string _codigo, Cliente* _cliente, Empleado* _empleado)
{
    codigo = _codigo;
    cliente = _cliente;
    empleado = _empleado;
}

string Orden::getCodigo()
{
    return codigo;
}

string Orden::getCliente()
{
    return cliente->getCodigo() << " " << cliente->getNombre();
}

string Orden::getEmpleado()
{
    return empleado->getCodigo() << " " << empleado->getNombre();
}

void Orden::agregarArticulo(Articulo* articulo)
{
    articulos.push_back(articulo);
}
void Orden::mostrarArticulo()
{
    for(Articulo* articulo: articulos)
    {
        cout<<articulo->getCodigo() << " " << articulo->getNombre() << " " << articulo->getPrecio() << endl;
    }
}

void Orden::mostrar()
{
    cout << "Codigo: " << getCodigo() << endl;
    cout << "Cliente: " << getCliente() << endl;
    cout << "Empleado: " << getEmpleado() << endl;
    cout << "Articulos:" << endl;
    mostrarArticulo();
}clearerr_s
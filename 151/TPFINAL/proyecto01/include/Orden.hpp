// include/Orden.hpp
#ifndef ORDEN_HPP
#define ORDEN_HPP

#include <string>
#include "DetalleArticulo.hpp"
#include "Cliente.hpp"

class Orden {
    string codigo;
    DetalleArticulo detalle;
    Cliente cliente;

public:
    Orden(const string& codigo, const DetalleArticulo& detalle, const Cliente& cliente)
        : codigo(codigo), detalle(detalle), cliente(cliente) {}

    void mostrarOrden() const;
};

#endif // ORDEN_HPP

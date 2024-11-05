// include/DetalleArticulo.hpp
#ifndef DETALLE_ARTICULO_HPP
#define DETALLE_ARTICULO_HPP

#include "Articulo.hpp"

class DetalleArticulo {
    Articulo* articulo;
    int cantidad;
    double precioTotal;

public:
    DetalleArticulo(Articulo* articulo, int cantidad)
        : articulo(articulo), cantidad(cantidad), precioTotal(articulo->obtenerPrecio() * cantidad) {}

    double obtenerPrecioTotal() const { return precioTotal; }
    int obtenerCantidad() const { return cantidad; }
    string obtenerDescripcionArticulo() const { return articulo->obtenerDescripcion(); }
};

#endif // DETALLE_ARTICULO_HPP

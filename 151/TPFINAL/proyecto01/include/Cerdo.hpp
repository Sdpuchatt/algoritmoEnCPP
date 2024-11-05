// include/Cerdo.hpp
#ifndef CERDO_HPP
#define CERDO_HPP

#include "Articulo.hpp"

class Cerdo : public Articulo {
public:
    Cerdo(const string& codigo, const string& nombre, double precio)
        : Articulo(codigo, nombre, precio) {}

    string obtenerDescripcion() const override { return "Cerdo: " + nombre; }
};

#endif // CERDO_HPP

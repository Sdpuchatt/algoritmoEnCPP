// include/Pollo.hpp
#ifndef POLLO_HPP
#define POLLO_HPP

#include "Articulo.hpp"

class Pollo : public Articulo {
public:
    Pollo(const string& codigo, const string& nombre, double precio)
        : Articulo(codigo, nombre, precio) {}

    string obtenerDescripcion() const override { return "Pollo: " + nombre; }
};

#endif // POLLO_HPP

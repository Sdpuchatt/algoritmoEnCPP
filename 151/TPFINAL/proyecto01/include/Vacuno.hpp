// include/Vacuno.hpp
#ifndef VACUNO_HPP
#define VACUNO_HPP

#include "Articulo.hpp"

class Vacuno : public Articulo {
public:
    Vacuno(const string& codigo, const string& nombre, double precio)
        : Articulo(codigo, nombre, precio) {}

    string obtenerDescripcion() const override { return "Vacuno: " + nombre; }
};

#endif // VACUNO_HPP

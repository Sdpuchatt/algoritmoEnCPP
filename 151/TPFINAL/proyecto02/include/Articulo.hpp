// include/Articulo.hpp
#ifndef ARTICULO_HPP
#define ARTICULO_HPP

#include <string>
using namespace std;

class Articulo {
protected:
    string codigo;
    string nombre;
    double precio;

public:
    Articulo(string codigo,string nombre, double precio);

    virtual string obtenerDescripcion() const = 0;
    double obtenerPrecio();
};

#endif // ARTICULO_HPP
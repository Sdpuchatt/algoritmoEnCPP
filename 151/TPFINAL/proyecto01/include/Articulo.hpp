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
    Articulo(const string& codigo, const string& nombre, double precio)
        : codigo(codigo), nombre(nombre), precio(precio) {}
    
    virtual ~Articulo() = default;

    virtual string obtenerDescripcion() const = 0;
    double obtenerPrecio() const { return precio; }
};

#endif // ARTICULO_HPP

#ifndef ARTICULO_HPP
#define ARTICULO_HPP

#include <string>

class Articulo {
private:
    std::string codigo;
    std::string nombre;
    double precio;

public:
    Articulo(std::string codigo, std::string nombre, double precio);
    std::string getCodigo();
    std::string getNombre();
    double getPrecio();
    void mostrar();
};

#endif

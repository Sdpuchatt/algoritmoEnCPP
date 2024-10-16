#ifndef ARTICULO_H
#define ARTICULO_H

#include <string>

class Articulo {
public:
    std::string nombre;
    double precio;
    
    Articulo(std::string nombre, double precio);
};

#endif

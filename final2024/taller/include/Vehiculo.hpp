// Vehiculo.hpp
#ifndef VEHICULO_HPP
#define VEHICULO_HPP

#include <string>
using namespace std;

class Vehiculo {
protected:
    string color;
    string marca;

public:
    Vehiculo(string color, string marca);
    virtual void arrancar() = 0;
    virtual void parar() = 0;
    virtual void repostar() = 0;
    string getNombre() const { return marca + " " + color; }
};

#endif
